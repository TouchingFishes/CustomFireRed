SixIsland_Mart_MapScripts::
	.byte 0

SixIsland_Mart_EventScript_Clerk::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart SixIsland_Mart_Items
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
SixIsland_Mart_Items::
	.2byte ITEM_TM01
	.2byte ITEM_TM02
	.2byte ITEM_TM08
	.2byte ITEM_TM14
	.2byte ITEM_TM17
	.2byte ITEM_TM22
	.2byte ITEM_TM25
	.2byte ITEM_NONE
	release
	end

SixIsland_Mart_EventScript_Picnicker::
	msgbox SixIsland_Mart_Text_ShouldBuyMailAndWriteLetter, MSGBOX_NPC
	end
