CeruleanCity_Mart_MapScripts::
	.byte 0

CeruleanCity_Mart_EventScript_Youngster::
	msgbox CeruleanCity_Mart_Text_RepelWorksOnWeakMons, MSGBOX_NPC
	end

CeruleanCity_Mart_EventScript_Woman::
	msgbox CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy, MSGBOX_NPC
	end

CeruleanCity_Mart_EventScript_VanilliteGuy::
	lock
	faceplayer
	goto_if_set FLAG_GOT_VANILLITE, CeruleanCity_Mart_EventScript_AlreadyGotVanillite
	msgbox CeruleanCity_Mart_Text_HaveMonForBeingATrainer
	setvar VAR_TEMP_1, SPECIES_VANILLITE
	givemon SPECIES_VANILLITE, 13
	goto_if_eq VAR_RESULT, 0, CeruleanCity_Mart_EventScript_ReceiveVanilliteParty
	goto_if_eq VAR_RESULT, 1, CeruleanCity_Mart_EventScript_ReceiveVanillitePC
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
	release
	end

CeruleanCity_Mart_EventScript_ReceiveVanilliteParty::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message CeruleanCity_Mart_Text_ObtainedVanilliteFromOldTrainer
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_VANILLITE
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CeruleanCity_Mart_EventScript_EndReceiveVanillite
	call EventScript_GetGiftMonPartySlot
	call EventScript_ChangePokemonNickname
	goto CeruleanCity_Mart_EventScript_EndReceiveVanillite
	end

CeruleanCity_Mart_EventScript_ReceiveVanillitePC::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message CeruleanCity_Mart_Text_ObtainedVanilliteFromOldTrainer
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_VANILLITE
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CeruleanCity_Mart_EventScript_VanilliteTransferredToPC
	call EventScript_NameReceivedBoxMon
	goto CeruleanCity_Mart_EventScript_VanilliteTransferredToPC
	end

CeruleanCity_Mart_EventScript_VanilliteTransferredToPC::
	call EventScript_TransferredToPC
	goto CeruleanCity_Mart_EventScript_EndReceiveVanillite
	end

CeruleanCity_Mart_EventScript_EndReceiveVanillite::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CeruleanCity_Mart_Text_ExplainVanillite
	setflag FLAG_GOT_VANILLITE
	release
	end

CeruleanCity_Mart_EventScript_AlreadyGotVanillite::
	msgbox SilphCo_7F_Text_RocketBossWentToBoardroom
	release
	end

CeruleanCity_Mart_EventScript_Clerk::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart CeruleanCity_Mart_Items
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
CeruleanCity_Mart_Items::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
	release
	end
