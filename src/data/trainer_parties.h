// Trainer party data exists for all of the RS trainer classes, but
// are only filled with one of the following placeholder pokemon.
// The actual FRLG trainer party data starts after these.
#define DUMMY_TRAINER_MON           \
    {                               \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
    }

#define DUMMY_TRAINER_MON_IV        \
    {                               \
        .iv = 100,                  \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
    }

// Copy of Swimmer Male Finn's party
#define DUMMY_TRAINER_STARMIE       \
    {                               \
        .lvl = 38,                  \
        .species = SPECIES_STARMIE, \
    }

static const struct TrainerMonItemCustomMoves sParty_AquaLeader[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_MIGHTYENA,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_BURNING_SAND, MOVE_TAKE_DOWN},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_MUK,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_WAILORD,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_WEAVILE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaGruntM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaGruntF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSAromaLady[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSRuinManiac[] = {DUMMY_TRAINER_MON};
//iris
static const struct TrainerMonItemCustomMoves sParty_Iris[] = {
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_HYDREIGON,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_SURF, MOVE_FIRE_BLAST},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_GEKOPON,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_THUNDERBOLT, MOVE_REST, MOVE_SLEEP_TALK},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_AGGRON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_HARD_STONE,
        .moves = {MOVE_AERIAL_ACE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_SING, MOVE_THUNDER},
    },
    {
        .iv = 255,
        .lvl = 78,
        .species = SPECIES_HAXORUS,
        .heldItem = ITEM_DRAGON_FANG,
        .moves = {MOVE_DRAGON_CLAW, MOVE_GUILLOTINE, MOVE_EARTHQUAKE, MOVE_X_SCISSOR},
    },
};
static const struct TrainerMonItemCustomMoves sParty_Barry[] = {
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_TOGETIC,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_PSYCHIC, MOVE_SOFT_BOILED},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_BODY_SLAM, MOVE_BRICK_BREAK},
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_TORTERRA,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_GIGA_DRAIN, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_INFERNAPE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_MACH_PUNCH, MOVE_AERIAL_ACE, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_EMPOLEON,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
//static const struct TrainerMonNoItemCustomMoves sParty_Paxton[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSCooltrainerM[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_RSCooltrainerF[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_HexManiac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSLady[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonItemCustomMoves sParty_Palmer[] = {
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_MISMAGIUS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_MAGICAL_LEAF},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_TANGROWTH,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_GRASS_KNOT, MOVE_ANCIENT_POWER, MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM},
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_PINSIR,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_X_SCISSOR, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_ROCK_WRECKER, MOVE_CURSE, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_MILOTIC,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_MACH_PUNCH, MOVE_AERIAL_ACE, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_TWISTER, MOVE_DRAGON_CLAW, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RichBoy[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPokemaniac[] = {DUMMY_TRAINER_MON};
//sora with ponta
static const struct TrainerMonItemCustomMoves sParty_RSSwimmerM[] = {
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_MAGICAL_LEAF},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_CORSOREEF,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_GRASS_KNOT, MOVE_ANCIENT_POWER, MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM},
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_DECIBELLE,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_X_SCISSOR, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_ROCK_WRECKER, MOVE_CURSE, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_DUNLONG,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_MACH_PUNCH, MOVE_AERIAL_ACE, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_PURUGLY,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SLASH, MOVE_BURNING_SAND, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
//thilo
static const struct TrainerMonNoItemDefaultMoves sParty_RSBlackBelt[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_Guitarist[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemCustomMoves sParty_KindlerWerner[] = {
    {
        .iv = 255,
        .lvl = 42,
        .species = SPECIES_SLUGMA,
        .moves = {MOVE_ROCK_THROW, MOVE_FLAMETHROWER, MOVE_AMNESIA, MOVE_YAWN},
    },
    {
        .iv = 255,
        .lvl = 42,
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_ROCK_TOMB, MOVE_FLAMETHROWER, MOVE_CURSE, MOVE_BURNING_SAND},
    },
    {
        .iv = 255,
        .lvl = 41,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_AIR_CUTTER, MOVE_POISON_FANG, MOVE_CONFUSE_RAY, MOVE_BITE},
    },
    {
        .iv = 255,
        .lvl = 44,
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE},
    },
};
//sora without ponta
static const struct TrainerMonItemCustomMoves sParty_RSCamper[] = {
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_MAGICAL_LEAF},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_CORSOREEF,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_GRASS_KNOT, MOVE_ANCIENT_POWER, MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM},
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_DECIBELLE,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_X_SCISSOR, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_GEKOPON,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_ROCK_WRECKER, MOVE_CURSE, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_DUNLONG,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_MACH_PUNCH, MOVE_AERIAL_ACE, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 79,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SLASH, MOVE_BURNING_SAND, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
static const struct TrainerMonNoItemCustomMoves sParty_BugManiacAaron[] = {
    {
        .iv = 180,
        .lvl = 51,
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_ANCIENT_POWER, MOVE_DRAGON_BREATH, MOVE_WING_ATTACK, MOVE_HYPNOSIS},
    },
    {
        .iv = 180,
        .lvl = 51,
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_SUNNY_DAY, MOVE_GROWTH},
    },
    {
        .iv = 180,
        .lvl = 49,
        .species = SPECIES_PINSIR,
        .moves = {MOVE_X_SCISSOR, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = 180,
        .lvl = 51,
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_AERIAL_ACE, MOVE_PSYBEAM, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN},
    },
    {
        .iv = 255,
        .lvl = 53,
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_ATTACK_ORDER, MOVE_FLY, MOVE_HEAL_ORDER, MOVE_DEFEND_ORDER},
    },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPsychicM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPsychicF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSGentleman[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonItemCustomMoves sParty_EliteFourSidney[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonItemCustomMoves sParty_EliteFourPhoebe[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonItemCustomMoves sParty_LeaderRoxanne[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_GEOWATT,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_BURNING_SAND, MOVE_TAKE_DOWN},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_ARMALDO,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_RELICANTH,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_AGGRON,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_CRADILY,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_NOSEPASS,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
static const struct TrainerMonItemCustomMoves sParty_LeaderBrawly[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_LUCARIO,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_BURNING_SAND, MOVE_TAKE_DOWN},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_MLLOY,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
static const struct TrainerMonItemCustomMoves sParty_LeaderTateLiza[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_XATU,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_BURNING_SAND, MOVE_TAKE_DOWN},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_GRUMPIG,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_LUNATONE,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_SOLROCK,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_DECIBELLE,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
static const struct TrainerMonNoItemDefaultMoves sParty_SchoolKidM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SchoolKidF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SrAndJr[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PokefanM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PokefanF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_ExpertM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_ExpertF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonItemCustomMoves sParty_Cynthia[] = {
    {
        .iv = 255,
        .lvl = 78,
        .species = SPECIES_SPIRITOMB,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_FAINT_ATTACK, MOVE_PROTECT, MOVE_SILVER_WIND, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_LUCARIO,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_AURA_SPHERE, MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_TOGETIC,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLY, MOVE_SHOCK_WAVE, MOVE_OMINOUS_WIND, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_MILOTIC,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH, MOVE_RECOVER},
    },
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_ROSERADE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE},
    },
    {
        .iv = 255,
        .lvl = 79,
        .species = SPECIES_GARCHOMP,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BRICK_BREAK, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_HYPER_BEAM},
    },
};
static const struct TrainerMonItemCustomMoves sParty_RSChampion[] = {
    {
        .iv = 255,
        .lvl = 77,
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLY, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_CRADILY,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_CURSE, MOVE_INGRAIN, MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_ARMALDO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_WATER_PULSE, MOVE_X_SCISSOR},
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
    },
    {
        .iv = 255,
        .lvl = 76,
        .species = SPECIES_AGGRON,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_ICE_BEAM, MOVE_THUNDER},
    },
    {
        .iv = 255,
        .lvl = 78,
        .species = SPECIES_METAGROSS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_PSYCHIC},
    },
};
static const struct TrainerMonNoItemDefaultMoves sParty_RSFisherman[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_CyclingTriathleteM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_CyclingTriathleteF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RunningTriathleteM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RunningTriathleteF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmingTriathleteM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmingTriathleteF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_DragonTamer[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBirdKeeper[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemCustomMoves sParty_NinjaBoyTakeshi[] = {
    {
        .iv = 255,
        .lvl = 51,
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_SPIKES, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 51,
        .species = SPECIES_MUK,
        .moves = {MOVE_FLAMETHROWER, MOVE_GUNK_SHOT, MOVE_FAINT_ATTACK, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 51,
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_PROTECT, MOVE_POISON_FANG},
    },
    {
        .iv = 255,
        .lvl = 51,
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 255,
        .lvl = 53,
        .species = SPECIES_CROBAT,
        .moves = {MOVE_FLY, MOVE_POISON_FANG, MOVE_FAINT_ATTACK, MOVE_TOXIC},
    },
};
static const struct TrainerMonNoItemDefaultMoves sParty_BattleGirl[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_ParasolLady[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSwimmerF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPicnicker[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSTwins[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSailor[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BoarderM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BoarderF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemCustomMoves sParty_Collector[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonItemCustomMoves sParty_Wally[] = {
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_DRAGON_CLAW, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_GARDEVOIR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_DELCATTY,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SURF, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_REST},
    },
    {
        .iv = 255,
        .lvl = 57, 
        .species = SPECIES_ROSERADE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DIVE, MOVE_DRAGON_BREATH, MOVE_TWISTER, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SURF, MOVE_ROCK_SMASH, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 60,
        .species = SPECIES_GALLADE,
        .heldItem = ITEM_DRAGON_FANG,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_CRUNCH, MOVE_FIRE_BLAST},
    },
};
static const struct TrainerMonItemCustomMoves sParty_Brendan[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Brendan2[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Brendan3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonItemCustomMoves sParty_May[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_May2[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_May3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnBreederM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnBreederF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnRangerM[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnRangerF[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonItemCustomMoves sParty_MagmaLeader[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_MIGHTYENA,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_BURNING_SAND, MOVE_TAKE_DOWN},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_CLAYDOL,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_SHIFTRY,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FAINT_ATTACK, MOVE_EXTRASENSORY, MOVE_GIGA_DRAIN, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaGruntM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaGruntF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSLass[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBugCatcher[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSHiker[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSYoungCouple[] = {DUMMY_TRAINER_MON, DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_OldCouple[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonItemCustomMoves sParty_RockerMoa[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_URSARING,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_HYPER_BEAM, MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_TINKATON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_GIGATON_SLAM, MOVE_SUPERPOWER, MOVE_BRICK_BREAK, MOVE_FAKE_OUT},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_BITEMARE,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_METAL_CLAW, MOVE_POISON_FANG, MOVE_CRUNCH, MOVE_FAKE_OUT},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_AGGRON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_DECIBELLE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_SHOCK_WAVE, MOVE_MIRROR_SHOT, MOVE_SHADOW_BALL},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_DRAGON_FANG,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP},
    },
};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaAdminMatt[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaAdminShelly[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaAdminTabitha[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaAdminCourtney[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonItemCustomMoves sParty_LeaderWattson[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_GEOWATT,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_BURNING_SAND, MOVE_TAKE_DOWN},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_AMPHAROS,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_VOLTREAN,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_REST, MOVE_SLEEP_TALK},
    },
};
static const struct TrainerMonItemCustomMoves sParty_LeaderFlannery[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_TORKOAL,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_BODY_SLAM, MOVE_YAWN, MOVE_EARTHQUAKE, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_TALONFLAME,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_QUICK_ATTACK, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_HOUNDOOM,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_BLAZIKEN,
        .heldItem = ITEM_LIECHI_BERRY,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_OVERHEAT},
    },
};
static const struct TrainerMonItemCustomMoves sParty_LeaderNorman[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_HYPER_BEAM, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_WYRDEER,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SURF, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_REST},
    },
    {
        .iv = 255,
        .lvl = 66, //53
        .species = SPECIES_URSARING,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DIVE, MOVE_DRAGON_BREATH, MOVE_TWISTER, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SURF, MOVE_ROCK_SMASH, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_DRAGON_FANG,
        .moves = {MOVE_HYPER_BEAM, MOVE_FLY, MOVE_CRUNCH, MOVE_FIRE_BLAST},
    },
};
static const struct TrainerMonItemCustomMoves sParty_LeaderWinona[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_DRAGON_CLAW, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_TALONFLAME,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_VOLTREAN,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SURF, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_REST},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DIVE, MOVE_DRAGON_BREATH, MOVE_TWISTER, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_GLISCOR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SURF, MOVE_ROCK_SMASH, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_DRAGON_FANG,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_CRUNCH, MOVE_FIRE_BLAST},
    },
};
static const struct TrainerMonItemCustomMoves sParty_LeaderWallace[] = {
    {
        .iv = 255,
        .lvl = 67,
        .species = SPECIES_WAILORD,
        .heldItem = ITEM_MYSTIC_WATER,
        .moves = {MOVE_WATER_SPOUT, MOVE_RAIN_DANCE, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_WHISCASH,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SURF, MOVE_SPARK, MOVE_EARTHQUAKE, MOVE_REST},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 66, 
        .species = SPECIES_LUDICOLO,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_LIECHI_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_TWISTER, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_MILOTIC,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_ICE_BEAM, MOVE_RECOVER},
    },
};
static const struct TrainerMonItemCustomMoves sParty_EliteFourGlacia[] = {
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_GLALIE,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_DRAGON_CLAW, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_GLACEON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_WALREIN,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SURF, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_REST},
    },
    {
        .iv = 255,
        .lvl = 57, //53
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DIVE, MOVE_DRAGON_BREATH, MOVE_TWISTER, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_FROSLASS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SURF, MOVE_ROCK_SMASH, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 60,
        .species = SPECIES_WALREIN,
        .heldItem = ITEM_DRAGON_FANG,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_CRUNCH, MOVE_FIRE_BLAST},
    },
};
static const struct TrainerMonItemCustomMoves  sParty_EliteFourDrake[] = {
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_FLYGON,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT},
    },
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_CURSOLA,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_KUJINOUGHT,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SURF, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_REST},
    },
    {
        .iv = 255,
        .lvl = 57, //53
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DIVE, MOVE_DRAGON_BREATH, MOVE_TWISTER, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_CRUNCH, MOVE_SURF, MOVE_ROCK_SMASH, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 60,
        .species = SPECIES_SALAMENCE,
        .heldItem = ITEM_DRAGON_FANG,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLY, MOVE_CRUNCH, MOVE_FIRE_BLAST},
    },
};

// Start of actual trainer data
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterCalvin[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_RUFFLET,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJosh[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_TEDDIURSA,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_TEDDIURSA,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_TEDDIURSA,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJoey[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_SPEAROW,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDan[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SLOWPOKE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_SANDSHREW,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTyler[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_DROWZEE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterEddie[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_DROWZEE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDillon[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_RUFFLET,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_WOOPER,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDave[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_NIDORINO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen2[] = {
    {
        .iv = 20,
        .lvl = 17,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 20,
        .lvl = 17,
        .species = SPECIES_PONYTA,
    },
    {
        .iv = 20,
        .lvl = 17,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherRick[] = {
    {
        .iv = 0,
        .lvl = 6,
        .species = SPECIES_WEEDLE,
    },
    {
        .iv = 0,
        .lvl = 6,
        .species = SPECIES_CATERPIE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherDoug[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_WEEDLE,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_KAKUNA,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_WEEDLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherSammy[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_LEDYBA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_WEEDLE,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_LEDYBA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherGreg[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_SPINARAK,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_LEDYBA,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_YANMA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_KindlerJames[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_PONYTA,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherKent[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_KAKUNA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherRobby[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_METAPOD,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherCale[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_SPINARAK,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_LEDYBA,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_SPINARAK,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_LEDYBA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherKeigo[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_WEEDLE,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_WEEDLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherElijah[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_BUTTERFREE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher2[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_VENONAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugManiacBrent[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_FOMANTIS,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_BEEDRILL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherConner[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_SPINARAK,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VENONAT,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_ARIADOS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_HOOTHOOT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassSally[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_BUDEW,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassRobin[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_JIGGLYPUFF,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassCrissy[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PARASECT,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_WIGGLYTUFF,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PARASECT,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_VANILLISH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMiriam[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_BELLSPROUT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassIris[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_CLEFAIRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassReli[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassAli[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_MARILL,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_BELLSPROUT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lass2[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassHaley[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_ODDISH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassAnn[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_SUNKERN,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_FLAAFFY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassDawn[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_MILTANK,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassPaige[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_NIDORAN_F,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_NIDORINA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassAndrea[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GLAMEOW,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_VANILLITE,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_TEDDIURSA,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_PIKACHU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJulia[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_SNUBBULL,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_SNUBBULL,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_LassKay[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_ACID, MOVE_GROWTH, MOVE_SLEEP_POWDER, MOVE_VINE_WHIP},
    },
    {
        .iv = 255,
        .lvl = 27,
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_BODY_SLAM, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassLisa[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_VILEPLUME,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorEdmond[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_SHELLDER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorTrevor[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorLeonard[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_QUAGSIRE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorDuncan[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorHuey[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_REMORAID,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_STARYU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorDylan[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_VOLTREL,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_REMORAID,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorPhillip[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VOLTREL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerDwayne[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_VOLTORB,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CamperLiam[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_SCRATCH, MOVE_DEFENSE_CURL, MOVE_SAND_ATTACK, MOVE_NONE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_KindlerShane[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperEthan[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MANKEY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_TOTODILE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Camper2[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_CHARMANDER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperDrew[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_SANDSHREW,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerDiana[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_AZUMARILL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerNancy[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_MAREEP,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SQUIRTLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SNUBBULL,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SNUBBULL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_SUNKERN,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_CLEFAIRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_BELLSPROUT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCaitlin[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerHeidi[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_CLEFAIRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCarol[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_TEDDIURSA,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSofia[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_JIGGLYPUFF,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_JIGGLYPUFF,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMartha[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_BULBASAUR,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerTina[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_BULBASAUR,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_IVYSAUR,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerHannah[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark[] = {
    {
        .iv = 30,
        .lvl = 38,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 30,
        .lvl = 38,
        .species = SPECIES_LICKITUNG,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman[] = {
    {
        .iv = 30,
        .lvl = 20,
        .species = SPECIES_SLAKOTH,
    },
    {
        .iv = 30,
        .lvl = 22,
        .species = SPECIES_VIGOROTH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacCooper[] = {
    {
        .iv = 30,
        .lvl = 23,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 30,
        .lvl = 23,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 30,
        .lvl = 23,
        .species = SPECIES_PSYDUCK,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CollectorSteve[] = {
    {
        .iv = 30,
        .lvl = 24,
        .species = SPECIES_CYNDAQUIL,
    },
    {
        .iv = 30,
        .lvl = 24,
        .species = SPECIES_TOTODILE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacWinston[] = {
    {
        .iv = 30,
        .lvl = 26,
        .species = SPECIES_LICKITUNG,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacDawson[] = {
    {
        .iv = 230,
        .lvl = 48,
        .species = SPECIES_CAMERUPT,
    },
    {
        .iv = 230,
        .lvl = 48,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = 230,
        .lvl = 48,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 230,
        .lvl = 51,
        .species = SPECIES_GEKOPON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacAshton[] = {
    {
        .iv = 30,
        .lvl = 24,
        .species = SPECIES_CUBONE,
    },
    {
        .iv = 30,
        .lvl = 24,
        .species = SPECIES_SLOWPOKE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdJovan[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_MAWILE,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_VOLTORB,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdMiguel[] = {
    {
        .iv = 50,
        .lvl = 13,
        .species = SPECIES_GRIMER,
    },
    {
        .iv = 50,
        .lvl = 13,
        .species = SPECIES_SOLOSIS,
    },
    {
        .iv = 50,
        .lvl = 15,
        .species = SPECIES_MAGNEMITE,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_SuperNerdAidan[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_SOLOSIS,
        .moves = {MOVE_CONFUSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_PORYGON,
        .moves = {MOVE_PSYBEAM, MOVE_RECOVER, MOVE_SHOCK_WAVE, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK, MOVE_TACKLE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdGlenn[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GRIMER,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MUK, //also has a muk in vanilla
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_SuperNerdLeslie[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_SELF_DESTRUCT},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd1[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_WEEZING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd2[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd3[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_VOLTORB,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdErik[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_CLAYDOL,
    },
    {
        .iv = 255,
        .lvl = 45,
        .species = SPECIES_TYPHLOSION,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_KindlerAvery[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_NUMEL,
    },
    {
        .iv = 255,
        .lvl = 47,
        .species = SPECIES_CHARIZARD,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdDerek[] = {
    {
        .iv = 255,
        .lvl = 49,
        .species = SPECIES_PORYGON2,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdZac[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_REUNICLUS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerMarcos[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_PARAS,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_PHANPY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerFranklin[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_GEODUDE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerNob[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_GEODUDE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerWayne[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_ONIX,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_HikerAlan[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_ONIX,
        .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerBrice[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_ARON,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_SHINX,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_ARON,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_HikerClark[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_ONIX,
        .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerTrent[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_CUBONE,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_HikerDudley[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_HikerAllen[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_NOSEPASS,
        .moves = {MOVE_ROCK_SMASH, MOVE_ROCK_THROW, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEric[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerLenny[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GEODUDE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_KindlerOliver[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_GROWLITHE,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_HikerLucas[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_CUBONE,
        .moves = {MOVE_HEADBUTT, MOVE_BONE_RUSH, MOVE_ROCK_TOMB, MOVE_LEER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_ONIX,
        .moves = {MOVE_HEADBUTT, MOVE_BIND, MOVE_ROCK_TOMB, MOVE_SCREECH},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerJared[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_POISON_GAS},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerMalik[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_IMPIDIMP,
        .moves = {MOVE_FAKE_OUT, MOVE_FAINT_ATTACK, MOVE_LOW_KICK, MOVE_MEGA_KICK},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_IMPIDIMP,
        .moves = {MOVE_FAKE_OUT, MOVE_FAINT_ATTACK, MOVE_LOW_KICK, MOVE_MEGA_KICK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerErnest[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerAlex[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_CROAGUNK,
        .moves = {MOVE_MUD_SLAP, MOVE_ASTONISH, MOVE_REVENGE, MOVE_POUND},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerLao[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Biker1[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerHideo[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_CROAGUNK,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerRuben[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerBilly[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerNikolas[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerJaxon[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerWilliam[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELF_DESTRUCT, MOVE_TACKLE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerLukas[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_FURY_ATTACK, MOVE_TWINEEDLE, MOVE_AERIAL_ACE, MOVE_RAGE},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_CROAGUNK,
        .moves = {MOVE_REVENGE, MOVE_POISON_STING, MOVE_ASTONISH, MOVE_POUND},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerIsaac[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_HOUNDOUR,
        .moves = {MOVE_BITE, MOVE_EMBER, MOVE_SMOG, MOVE_BODY_SLAM},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerGerald[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar1[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar2[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GROWLITHE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar3[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CHARMANDER,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_PONYTA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarQuinn[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_OCTILLERY,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_NOSEPASS,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_KindlerRamon[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_TORKOAL,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_CAMERUPT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_KindlerDusty[] = {
    {
        .iv = 255,
        .lvl = 47,
        .species = SPECIES_TALONFLAME,
    },
    {
        .iv = 255,
        .lvl = 47,
        .species = SPECIES_TALONFLAME,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarArnie[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_CHARMELEON,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_QUILAVA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar4[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMANDER,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMELEON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarSimon[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarLewis[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_FLAREON,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_NOSEPASS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBaily[] = {
    {
        .iv = 0,
        .lvl = 22, //21
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 23, //21
        .species = SPECIES_ELEKID,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBraxton[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_MAGNEMITE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBernie[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_TINKATINK,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MAGNETON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanDale[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_BARBOACH,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_GOLDEEN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanBarny[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_CHINCHOU,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_BARBOACH,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SHELLDER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanNed[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_BARBOACH,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_GOLDEEN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanChip[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_REMORAID,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanHank[] = {
    {
        .iv = 255,
        .lvl = 29,
        .species = SPECIES_OCTILLERY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanElliot[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_BARBOACH,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_HORSEA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanRonald[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_OCTILLERY,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanClaude[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_CLOYSTER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanWade[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAGIKARP,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanNolan[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_WHISCASH,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_WHISCASH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanAndrew[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MAGIKARP,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleLuis[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SHELLDER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleRichard[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_SHELLDER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleReece[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_STARYU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMatthew[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_OCTILLERY,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_OCTILLERY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDouglas[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_QWILFISH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDavid[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_OCTILLERY,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleTony[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_HORSEA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleAxle[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleBarry[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_CLOYSTER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDean[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDarrin[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SEEL,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SEEL,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_HORSEA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSpencer[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJack[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_KINGLER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJerome[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_WARTORTLE,
    },
    {
        .iv = 255,
        .lvl = 43,
        .species = SPECIES_BLASTOISE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleRoland[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_REMORAID,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_REMORAID,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallKoji[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_FARFETCHD,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallLuke[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHOP,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCamron[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHOP,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallRaul[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_PRIMEAPE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallIsaiah[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MLLOY,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_TAUROS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallZeek[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallJamal[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_TAUROS,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CROAGUNK,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCorey[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallChase[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerHugo[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_HORSEA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerJasper[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_SUNKERN,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_ODDISH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerDirk[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_SUNKERN,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_CHIKORITA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerDarian[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerStan[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_WOOPER,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_POLIWHIRL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Gamer1[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerRich[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyBridget[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SUNFLORA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyTamia[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SKIPLOOM,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_CHIKORITA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLori[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_EXEGGCUTE,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_EXEGGCUTE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLola[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GLAMEOW,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FLITTLE,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_FLAAFFY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautySheila[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_WIGGLYTUFF,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleTiffany[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_DEWGONG,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNora[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SEEL,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SEEL,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_DEWGONG,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMelissa[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_POLIWRATH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyGrace[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_CLEFABLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyOlivia[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_IVYSAUR,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_IVYSAUR,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLauren[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WEEPINBELL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAnya[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_POLITOED,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAlice[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleConnie[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_VAPOREON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleShirley[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_REMORAID,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_CORSOLA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicJohan[] = {
    {
        .iv = 50,
        .lvl = 37,
        .species = SPECIES_BALTOY,
    },
    {
        .iv = 50,
        .lvl = 37,
        .species = SPECIES_BALTOY,
    },
    {
        .iv = 50,
        .lvl = 37,
        .species = SPECIES_KADABRA,
    },
        {
        .iv = 50,
        .lvl = 39,
        .species = SPECIES_XATU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicTyron[] = {
    {
        .iv = 50,
        .lvl = 39,
        .species = SPECIES_MR_MIME,
    },
    {
        .iv = 50,
        .lvl = 39,
        .species = SPECIES_ESPATHRA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicCameron[] = {
    {
        .iv = 50,
        .lvl = 36,
        .species = SPECIES_SLOWPOKE,
    },
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_TOXIBRO,
    },
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_SLOWBRO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicPreston[] = {
    {
        .iv = 50,
        .lvl = 40,
        .species = SPECIES_WOBBUFFET,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RockerRandall[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VOLTORB,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RockerLuca[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_ELECTRODE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerDalton[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MR_MIME,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MR_MIME,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerNelson[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_REUNICLUS,
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_MR_MIME,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_NinjaBoyKirk[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_VENOMOTH,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_ARIADOS,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_NinjaBoyShawn[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_FLY, MOVE_POISON_FANG, MOVE_PROTECT, MOVE_TOXIC},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_FIRE_BLAST, MOVE_TOXIC},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CollectorGregory[] = {
    {
        .iv = 230,
        .lvl = 50,
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_MIRROR_SHOT, MOVE_BLIZZARD, MOVE_MILK_DRINK, MOVE_ICE_BEAM},
    },
    {
        .iv = 230,
        .lvl = 50,
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_FANG, MOVE_CRUNCH, MOVE_FACADE, MOVE_EARTHQUAKE},
    },
    {
        .iv = 225,
        .lvl = 50,
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SWORDS_DANCE, MOVE_ROCK_SMASH, MOVE_IRON_TAIL},
    },
    {
        .iv = 255,
        .lvl = 50,
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_DOUBLE_SLAP, MOVE_ENCORE},
    },
    {
        .iv = 255,
        .lvl = 52,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_SLASH, MOVE_BURNING_SAND, MOVE_FAINT_ATTACK, MOVE_QUICK_ATTACK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_JugglerEdward[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = 255,
        .lvl = 53,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_GUNK_SHOT, MOVE_FIRE_BLAST, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 53,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_GUNK_SHOT, MOVE_FIRE_BLAST, MOVE_TOXIC},
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SWIFT, MOVE_SPARK, MOVE_SELF_DESTRUCT, MOVE_SCREECH},
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_REFLECT, MOVE_ENCORE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_NinjaBoyKayden[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_TOXICROAK,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_NinjaBoyNate[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_GLIGAR,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerPhil[] = {
    {
        .iv = 255,
        .lvl = 34,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 255,
        .lvl = 34,
        .species = SPECIES_HYPNO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEdgar[] = {
    {
        .iv = 40,
        .lvl = 33,
        .species = SPECIES_GLIGAR,
    },
    {
        .iv = 40,
        .lvl = 33,
        .species = SPECIES_CLODSIRE,
    },
    {
        .iv = 40,
        .lvl = 33,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_TamerJason[] = {
    {
        .iv = 40,
        .lvl = 54,
        .species = SPECIES_AGGRON,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_ROCK_TOMB, MOVE_BRICK_BREAK},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerCole[] = {
    {
        .iv = 40,
        .lvl = 48,
        .species = SPECIES_LAIRON,
    },
    {
        .iv = 40,
        .lvl = 49,
        .species = SPECIES_QUAGSIRE,
    },
    {
        .iv = 40,
        .lvl = 49,
        .species = SPECIES_QUAGSIRE,
    },
    {
        .iv = 40,
        .lvl = 51,
        .species = SPECIES_TAUROS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerVincent[] = {
    {
        .iv = 240,
        .lvl = 55,
        .species = SPECIES_SLAKING,
    },
    {
        .iv = 240,
        .lvl = 52,
        .species = SPECIES_VIGOROTH,
    },
    {
        .iv = 240,
        .lvl = 52,
        .species = SPECIES_VIGOROTH,
    },
    {
        .iv = 240,
        .lvl = 55,
        .species = SPECIES_SLAKING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerJohn[] = {
    {
        .iv = 40,
        .lvl = 42,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 40,
        .lvl = 42,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 40,
        .lvl = 42,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 40,
        .lvl = 42,
        .species = SPECIES_TAUROS,
    },
};
//bato
static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperSebastian[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_FARFETCHD,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperPerry[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_PIDGEOT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_VOLTREL,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_NinjaBoyDonald[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_VENOMOTH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperEdwin[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_HOOTHOOT,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_NATU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperWilton[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_PIDGEOT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRamiro[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_DODRIO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_HOOTHOOT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRoger[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_VOLTREAN,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_VOLTREAN,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_NOCTOWL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperReed[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperKeith[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperCarter[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMitch[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBeck[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMonItemCustomMoves sParty_BlackBeltKoichi[] = {
    {
        .iv = 255,
        .lvl = 41,
        .species = SPECIES_MLLOY,
        .heldItem = ITEM_STICK,
        .moves = {MOVE_AERIAL_ACE, MOVE_CUT, MOVE_DOUBLE_KICK, MOVE_COUNTER},
    },
    {
        .iv = 255,
        .lvl = 41,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_BOUNCE, MOVE_MEGA_KICK, MOVE_MIND_READER},
    },
    {
        .iv = 255,
        .lvl = 41,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltMike[] = {
    {
        .iv = 100,
        .lvl = 36,
        .species = SPECIES_MAKUHITA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 36,
        .species = SPECIES_MAKUHITA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 36,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHideki[] = {
    {
        .iv = 100,
        .lvl = 35,
        .species = SPECIES_MEDITITE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 35,
        .species = SPECIES_MEDITITE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltAaron[] = {
    {
        .iv = 100,
        .lvl = 39,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHitoshi[] = {
    {
        .iv = 100,
        .lvl = 35,
        .species = SPECIES_MEDITITE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 35,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltAtsushi[] = {
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_MLLOY,
        .heldItem = ITEM_STICK,
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_TOXICROAK,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CollectorKiyo[] = {
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_GLIGAR,
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = 100,
        .lvl = 52,
        .species = SPECIES_KANGASKHAN,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltTakashi[] = {
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_FALINKS,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_FALINKS,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_FALINKS,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltDaisuke[] = {
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_FALINKS,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 53,
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 53,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabSquirtle[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_SQUIRTLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabBulbasaur[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_BULBASAUR,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabCharmander[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CHARMANDER,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RivalRoute22EarlySquirtle[] = {
    {
        .iv = 50,
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 50,
        .lvl = 9,
        .species = SPECIES_SQUIRTLE,
        .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RivalRoute22EarlyBulbasaur[] = {
    {
        .iv = 50,
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 50,
        .lvl = 9,
        .species = SPECIES_BULBASAUR,
        .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_NONE, MOVE_NONE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RivalRoute22EarlyCharmander[] = {
    {
        .iv = 50,
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 50,
        .lvl = 9,
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_SCRATCH, MOVE_GROWL, MOVE_NONE, MOVE_NONE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RivalCeruleanSquirtle[] = {
    {
        .iv = 50,
        .lvl = 17,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 50,
        .lvl = 16,
        .species = SPECIES_ABRA,
        .moves = {MOVE_TELEPORT, MOVE_CONFUSION, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 50,
        .lvl = 15,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_QUICK_ATTACK, MOVE_NONE},
    },
    {
        .iv = 255,
        .lvl = 18,
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_WITHDRAW, MOVE_WATER_GUN},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RivalCeruleanBulbasaur[] = {
    {
        .iv = 50,
        .lvl = 17,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 50,
        .lvl = 16,
        .species = SPECIES_ABRA,
        .moves = {MOVE_TELEPORT, MOVE_CONFUSION, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 50,
        .lvl = 15,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_QUICK_ATTACK, MOVE_NONE},
    },
    {
        .iv = 255,
        .lvl = 18,
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_VINE_WHIP, MOVE_LEECH_SEED},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RivalCeruleanCharmander[] = {
    {
        .iv = 50,
        .lvl = 17,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 50,
        .lvl = 16,
        .species = SPECIES_ABRA,
        .moves = {MOVE_TELEPORT, MOVE_CONFUSION, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 50,
        .lvl = 15,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_QUICK_ATTACK, MOVE_NONE},
    },
    {
        .iv = 255,
        .lvl = 18,
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_METAL_CLAW, MOVE_EMBER, MOVE_GROWL, MOVE_SCRATCH},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTed[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_DUOSION,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_XATU,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_ScientistConnor[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SOLOSIS,
        .moves = {MOVE_CONFUSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_RAIN_DANCE},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_WEATHER_BALL, MOVE_SUNNY_DAY, MOVE_EMBER, MOVE_SHOCK_WAVE},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_WEATHER_BALL, MOVE_HAIL, MOVE_WATER_GUN, MOVE_POWDER_SNOW},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJerry[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SOLOSIS,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SOLOSIS,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MAGNETON,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_ScientistJose[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_RAIN_DANCE, MOVE_THUNDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_WEATHER_BALL, MOVE_SHOCK_WAVE, MOVE_WATER_GUN, MOVE_NONE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistRodney[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_PORYGON,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_ScientistBeau[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SOLOSIS,
        .moves = {MOVE_CONFUSION, MOVE_RECOVER, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_XATU,
        .moves = {MOVE_STEEL_WING, MOVE_NIGHT_SHADE, MOVE_SUBSTITUTE, MOVE_PECK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_ScientistTaylor[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_NATU,
        .moves = {MOVE_STEEL_WING, MOVE_NIGHT_SHADE, MOVE_SUBSTITUTE, MOVE_PECK},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SOLOSIS,
        .moves = {MOVE_CONFUSION, MOVE_RECOVER, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_RAIN_DANCE, MOVE_THUNDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJoshua[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_CLAYDOL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistParker[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_BALTOY,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_BALTOY,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_ScientistEd[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_DUOSION,
        .moves = {MOVE_HIDDEN_POWER, MOVE_FUTURE_SIGHT, MOVE_CONFUSION, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTravis[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_CLAYDOL,
    },

};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistBraydon[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_REUNICLUS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistIvan[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_REUNICLUS,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_CLAYDOL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BossGiovanni[] = {
    {
        .iv = 255,
        .lvl = 25,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 255,
        .lvl = 27,
        .species = SPECIES_DUGTRIO,
    },
    {
        .iv = 255,
        .lvl = 27,
        .species = SPECIES_PINSIR,
    },
    {
        .iv = 255,
        .lvl = 29,
        .species = SPECIES_KANGASKHAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BossGiovanni2[] = {
    {
        .iv = 255,
        .lvl = 35,
        .species = SPECIES_HONCHKROW,
    },
    {
        .iv = 255,
        .lvl = 39,
        .species = SPECIES_KANGASKHAN,
    },
    {
        .iv = 255,
        .lvl = 37,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = 255,
        .lvl = 37,
        .species = SPECIES_NIDOQUEEN,
    },
    {
        .iv = 255,
        .lvl = 42,
        .species = SPECIES_GRIMMSNARL,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_LeaderGiovanni[] = {
    {
        .iv = 255,
        .lvl = 51,
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_DRILL_PECK, MOVE_FAINT_ATTACK, MOVE_STEEL_WING, MOVE_THUNDER_WAVE},
    },
    {
        .iv = 255,
        .lvl = 51,
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SURF, MOVE_CRUNCH, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 53,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 53,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 55,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_ROCK_WRECKER, MOVE_CURSE, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt2[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_GRIMER, //SANDSHREW
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt3[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt4[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_NIDORAN_M,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt5[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_DROWZEE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt6[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_NIDORINO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt7[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt8[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_CROAGUNK,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_SNEASEL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt9[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt10[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_BITE, MOVE_QUICK_ATTACK, MOVE_FAKE_OUT, MOVE_SCREECH},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt11[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_DROWZEE,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt12[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_LEECH_LIFE, MOVE_WING_ATTACK, MOVE_BITE, MOVE_QUICK_ATTACK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt13[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN, MOVE_POUND},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP, MOVE_TACKLE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt14[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_CROAGUNK,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_IMPIDIMP,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_DROWZEE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt15[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MAWILE,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt16[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_HYPNO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt17[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt18[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_IMPIDIMP,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_IMPIDIMP,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt19[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt20[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_DROWZEE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt21[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt22[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MORGREM,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt23[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_GOLBAT,
    },
};
//silph co (?)
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt24[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt25[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt26[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SNEASEL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt27[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_CUBONE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt28[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SKARMORY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt29[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MORGREM,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt30[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_CUBONE,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt31[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_CROAGUNK,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_CROAGUNK,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt32[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SCARY_FACE, MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_MAWILE, 
        .moves = {MOVE_BITE, MOVE_METAL_CLAW, MOVE_FAKE_TEARS, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_WING_ATTACK, MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt33[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_NIDORINO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt34[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_SNEASEL,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_SNEASEL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt35[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_ELECTRODE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt36[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_IMPIDIMP,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt37[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GRIMER,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_ELECTRODE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt38[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_HYPNO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt39[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_PRIMEAPE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt40[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_PERSIAN,
    },
};
//exec?
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt41[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_PINSIR,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAROWAK,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerSamuel[] = {
    {
        .iv = 100,
        .lvl = 46,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_EARTHQUAKE},
    },
    {
        .iv = 100,
        .lvl = 46,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_EARTHQUAKE},
    },
    {
        .iv = 100,
        .lvl = 47,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_SLIDE, MOVE_FURY_ATTACK, MOVE_MAGNITUDE},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_REST, MOVE_EARTHQUAKE, MOVE_SLEEP_TALK},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_SLUDGE_BOMB, MOVE_DIG},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerGeorge[] = {
    {
        .iv = 250,
        .lvl = 49,
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_GROWTH, MOVE_LEECH_SEED},
    },
    {
        .iv = 250,
        .lvl = 49,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_FLY, MOVE_STEEL_WING, MOVE_STRENGTH, MOVE_FEATHER_DANCE},
    },
    {
        .iv = 250,
        .lvl = 49,
        .species = SPECIES_URSARING,
        .moves = {MOVE_STRENGTH, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_BRICK_BREAK},
    },
    {
        .iv = 250,
        .lvl = 49,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SPIKE_CANNON, MOVE_SPIKES, MOVE_ICICLE_SPEAR, MOVE_WATER_PULSE},
    },
    {
        .iv = 255,
        .lvl = 51,
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_ANCIENT_POWER, MOVE_DRAGON_CLAW},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerColby[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_CRABHAMMER, MOVE_ROCK_TOMB},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BODY_SLAM, MOVE_BRICK_BREAK, MOVE_BELLY_DRUM, MOVE_HYPNOSIS},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE, MOVE_HYDRO_PUMP},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_MUDDY_WATER, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 51,
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SKULL_BASH, MOVE_BRICK_BREAK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerPaul[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_HEADBUTT, MOVE_CONFUSION, MOVE_WATER_GUN, MOVE_DISABLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_AURORA_BEAM, MOVE_CLAMP, MOVE_SUPERSONIC, MOVE_LEER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_STARMIE,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SWIFT, MOVE_RECOVER, MOVE_RAPID_SPIN},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_CONFUSION, MOVE_SCRATCH, MOVE_SCREECH, MOVE_DISABLE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerRolando[] = {
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_EARTHQUAKE, MOVE_COSMIC_POWER, MOVE_PSYCHIC, MOVE_ANCIENT_POWER},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_THUNDERBOLT},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FLAMETHROWER, MOVE_AERIAL_ACE, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SURF, MOVE_CRUNCH, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUBSTITUTE, MOVE_ANCIENT_POWER},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerGilbert[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_WING_ATTACK, MOVE_FEATHER_DANCE, MOVE_WHIRLWIND, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_MIRROR_MOVE, MOVE_PURSUIT, MOVE_LEER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_PAY_DAY, MOVE_FAINT_ATTACK, MOVE_SCREECH, MOVE_BITE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_SLAM, MOVE_DISABLE, MOVE_WRAP, MOVE_SUPERSONIC},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_HORN_ATTACK, MOVE_SCARY_FACE, MOVE_SWAGGER, MOVE_TAIL_WHIP},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerOwen[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_SCRATCH, MOVE_POISON_STING, MOVE_DOUBLE_KICK, MOVE_BITE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_DOUBLE_KICK, MOVE_LEER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPER_FANG, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SLASH, MOVE_POISON_STING},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_STOMP, MOVE_TAIL_WHIP},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerBerke[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SEEL,
        .moves = {MOVE_TAKE_DOWN, MOVE_AURORA_BEAM, MOVE_ICY_WIND, MOVE_GROWL},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_ONIX,
        .moves = {MOVE_SLAM, MOVE_SANDSTORM, MOVE_DRAGON_BREATH, MOVE_ROCK_THROW},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SPIKE_CANNON, MOVE_AURORA_BEAM, MOVE_SUPERSONIC, MOVE_SURF},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerYuji[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ROCK_TOMB, MOVE_COUNTER},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_SLAM, MOVE_SWEET_KISS, MOVE_BRICK_BREAK, MOVE_COUNTER},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_GEOWATT,
        .moves = {MOVE_THUNDERBOLT, MOVE_ROCK_SMASH, MOVE_ROLLOUT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 255,
        .lvl = 52,
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_X_SCISSOR, MOVE_FAINT_ATTACK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerWarren[] = {
    {
        .iv = 100,
        .lvl = 46,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONE_CLUB, MOVE_HEADBUTT, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK},
    },
    {
        .iv = 100,
        .lvl = 46,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK},
    },
    {
        .iv = 100,
        .lvl = 46,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_SCARY_FACE},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_FURY_SWIPES, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
    },
    {
        .iv = 255,
        .lvl = 50,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_BODY_SLAM, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerMary[] = {
    {
        .iv = 100,
        .lvl = 24,
        .species = SPECIES_LOMBRE,
        .moves = {MOVE_WATER_PULSE, MOVE_ABSORB, MOVE_FAKE_OUT, MOVE_LEECH_SEED},
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_VINE_WHIP, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_GROWTH},
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = SPECIES_GLOOM,
        .moves = {MOVE_ABSORB, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_SWEET_SCENT},
    },
    {
        .iv = 100,
        .lvl = 26,
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_RAZOR_LEAF, MOVE_QUICK_ATTACK, MOVE_AERIAL_ACE, MOVE_SAND_ATTACK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerCaroline[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM},
    },
    {
        .iv = 255,
        .lvl = 48,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_X_SCISSOR, MOVE_GIGA_DRAIN},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_QUICK_ATTACK, MOVE_LEAF_BLADE, MOVE_BITE, MOVE_DIG},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH},
    },
     {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_SUNNY_DAY, MOVE_GRASS_WHISTLE, MOVE_SLUDGE_BOMB, MOVE_MAGICAL_LEAF},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerAlexa[] = {
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_SING, MOVE_HYPER_VOICE, MOVE_DIG, MOVE_ATTRACT},
    },
    {
        .iv = 255,
        .lvl = 51,
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_BODY_SLAM, MOVE_ATTRACT, MOVE_CRUNCH, MOVE_BRICK_BREAK},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE, MOVE_MILK_DRINK},
    },
    {
        .iv = 100,
        .lvl = 54,
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SING, MOVE_MINIMIZE, MOVE_SOFT_BOILED, MOVE_TOXIC},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerShannon[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_PIN_MISSILE, MOVE_TWINEEDLE, MOVE_AGILITY, MOVE_PURSUIT},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SAFEGUARD, MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_GROWTH},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_LEECH_LIFE, MOVE_DISABLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerNaomi[] = {
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_CALM_MIND},
    },
    {
        .iv = 255,
        .lvl = 50,
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_FAINT_ATTACK, MOVE_THUNDERBOLT},
    },
    {
        .iv = 255,
        .lvl = 50,
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_FLY, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FLAMETHROWER},
    },
    {
        .iv = 255,
        .lvl = 50,
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_FAINT_ATTACK, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 50,
        .species = SPECIES_BITEMARE,
        .moves = {MOVE_POISON_FANG, MOVE_CRUNCH, MOVE_METAL_CLAW, MOVE_ROCK_TOMB},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerBrooke[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SLAM, MOVE_BIND, MOVE_MEGA_DRAIN, MOVE_INGRAIN},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_GLOOM,
        .moves = {MOVE_ACID, MOVE_MOONLIGHT, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_MEGA_DRAIN, MOVE_ACID, MOVE_STUN_SPORE, MOVE_AROMATHERAPY},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_GROWL, MOVE_LEECH_SEED},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_GROWTH, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerAustina[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_STOMP},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_DOUBLE_KICK, MOVE_FURY_SWIPES, MOVE_BITE, MOVE_FLATTER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_GROWL},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_FOCUS_ENERGY, MOVE_LEER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_PECK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerJulie[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FURY_SWIPES, MOVE_BITE, MOVE_SCREECH, MOVE_FAINT_ATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_GRUDGE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FURY_ATTACK, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN, MOVE_AGILITY},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_SLAM, MOVE_DOUBLE_TEAM},
    },
};

static const struct TrainerMonItemCustomMoves sParty_EliteFourLorelei[] = {
    {
        .iv = 255,
        .lvl = 55,
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_MYSTIC_WATER,
        .moves = {MOVE_YAWN, MOVE_SURF, MOVE_FLAMETHROWER, MOVE_DREAM_EATER},
    },
    {
        .iv = 255,
        .lvl = 54,
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_YAWN},
    },
    {
        .iv = 255,
        .lvl = 55,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_DREAM_EATER},
    
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_MILOTIC,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_RECOVER, MOVE_HYPNOSIS},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_DREAM_EATER, MOVE_ICE_BEAM, MOVE_SING, MOVE_REST},
    },
};

static const struct TrainerMonItemCustomMoves sParty_EliteFourBruno[] = {
    {
        .iv = 255,
        .lvl = 55,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_CRUNCH, MOVE_ROAR},
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_SILVER_POWDER,
        .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_BRAVIARY,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_DRILL_PECK, MOVE_ROCK_TOMB, MOVE_BRICK_BREAK, MOVE_SUPERPOWER},
    },
    {
        .iv = 255,
        .lvl = 55,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_METAL_COAT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROAR, MOVE_IRON_TAIL, MOVE_CRUNCH},
    },
    {
        .iv = 255,
        .lvl = 61,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_ROCK_SLIDE, MOVE_BULK_UP, MOVE_MACH_PUNCH},
    },
};

static const struct TrainerMonItemCustomMoves sParty_EliteFourAgatha[] = {
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_CROBAT, //or weavile, gengar?
        .heldItem = ITEM_SHARP_BEAK,
        .moves = {MOVE_FLY, MOVE_POISON_FANG, MOVE_FAINT_ATTACK, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_DUSCLOPS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_PAIN_SPLIT},
    },
    {
        .iv = 255,
        .lvl = 60, 
        .species = SPECIES_KROLUCARD,
        .heldItem = ITEM_BLACK_GLASSES,
        .moves = {MOVE_DRAIN_LIFE, MOVE_EXTRASENSORY, MOVE_GIGA_DRAIN, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 60,
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FLAMETHROWER, MOVE_EARTHQUAKE, MOVE_POISON_TAIL, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_SPELL_TAG,
        .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_HYPNOSIS, MOVE_GIGA_DRAIN},
    },
};

static const struct TrainerMonItemCustomMoves sParty_EliteFourLance[] = {
    {
        .iv = 255,
        .lvl = 60,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_TWISTER, MOVE_OCTAZOOKA},
    },
    {
        .iv = 255,
        .lvl = 60,
        .species = SPECIES_HAXORUS,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_OUTRAGE},
    },
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_DRAGONAIR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH},
    },
    {
        .iv = 255,
        .lvl = 61,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_HARD_STONE,
        .moves = {MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER, MOVE_TWISTER, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 64,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_DRAGON_FANG,
        .moves = {MOVE_HYPER_BEAM, MOVE_OUTRAGE, MOVE_TWISTER, MOVE_FLAMETHROWER},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_LeaderBrock[] = {
    {
        .iv = 50,
        .lvl = 10,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 50,
        .lvl = 12,
        .species = SPECIES_ARON,
        .moves = {MOVE_TACKLE, MOVE_IRON_DEFENSE, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 50,
        .lvl = 14,
        .species = SPECIES_ONIX,
        .moves = {MOVE_TACKLE, MOVE_BIND, MOVE_ROCK_TOMB, MOVE_NONE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_LeaderMisty[] = {
    {
        .iv = 255,
        .lvl = 19,
        .species = SPECIES_CORSOLA, 
        .moves = {MOVE_TACKLE, MOVE_RECOVER, MOVE_WATER_PULSE, MOVE_AMNESIA},
    },
    {
        .iv = 255,
        .lvl = 19,
        .species = SPECIES_MANTINE,
        .moves = {MOVE_TACKLE, MOVE_SUPERSONIC, MOVE_WATER_PULSE, MOVE_NONE},
    },
    {
        .iv = 255,
        .lvl = 21,
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SWIFT, MOVE_RECOVER, MOVE_CONFUSION, MOVE_WATER_PULSE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_LeaderLtSurge[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_TACKLE, MOVE_SCREECH, MOVE_SHOCK_WAVE},
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_TACKLE, MOVE_SCREECH, MOVE_SHOCK_WAVE},
    },
    {
        .iv = 255,
        .lvl = 26,
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_QUICK_ATTACK, MOVE_ICE_PUNCH, MOVE_LIGHT_SCREEN, MOVE_THUNDER_PUNCH},
    },
    {
        .iv = 255,
        .lvl = 26,
        .species = SPECIES_RAICHU,
        .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_SHOCK_WAVE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_LeaderErika[] = {
    {
        .iv = 255,
        .lvl = 30,
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_AERIAL_ACE, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN},
    },
    {
        .iv = 255,
        .lvl = 27,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_ACID, MOVE_RAZOR_LEAF, MOVE_REFLECT, MOVE_INGRAIN},
    },
    {
        .iv = 255,
        .lvl = 27,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_POISON_POWDER, MOVE_BODY_SLAM, MOVE_INGRAIN, MOVE_GIGA_DRAIN},
    },
    {
        .iv = 255,
        .lvl = 30,
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_FACADE, MOVE_GIGA_DRAIN},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_LeaderKoga[] = {
    {
        .iv = 255,
        .lvl = 38,
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_SPIKES, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 40,
        .species = SPECIES_MUK,
        .moves = {MOVE_MINIMIZE, MOVE_GUNK_SHOT, MOVE_FAINT_ATTACK, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 40,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_GUNK_SHOT, MOVE_PROTECT, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 38,
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_SAND_TOMB, MOVE_ZAP_CANNON, MOVE_PROTECT, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 43,
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_FLY, MOVE_X_SCISSOR, MOVE_ROCK_SMASH, MOVE_TOXIC},
    },
};
//unsure if this is the way to go?
static const struct TrainerMonNoItemCustomMoves sParty_LeaderBlaine[] = {
    {
        .iv = 255,
        .lvl = 47,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_SOLAR_BEAM, MOVE_STOMP, MOVE_SUNNY_DAY, MOVE_FIRE_BLAST},
    },
    {
        .iv = 255,
        .lvl = 45,
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST},
    },
    {
        .iv = 255,
        .lvl = 47,
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_SUNNY_DAY, MOVE_CROSS_CHOP, MOVE_FIRE_BLAST},
    },
    {
        .iv = 255,
        .lvl = 45,
        .species = SPECIES_KUJINOUGHT,
        .moves = {MOVE_OCTAZOOKA, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_FIRE_BLAST},
    },
    {
        .iv = 255,
        .lvl = 50,
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_CRUNCH, MOVE_EXTREME_SPEED, MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_LeaderSabrina[] = {
    {
        .iv = 255,
        .lvl = 38,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_CALM_MIND, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_BATON_PASS},
    },
    {
        .iv = 255,
        .lvl = 40,
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
    },
    {
        .iv = 255,
        .lvl = 40,
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_BATON_PASS, MOVE_CALM_MIND},
    },
    {
        .iv = 255,
        .lvl = 38,
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_PSYCHIC, MOVE_SILVER_WIND, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN},
    },
    {
        .iv = 255,
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_RECOVER, MOVE_SHOCK_WAVE, MOVE_CALM_MIND},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanThomas[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_RUFFLET,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanArthur[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_ROSELIA,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_ROSELIA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanTucker[] = {
    {
        .iv = 0,
        .lvl = 25, //23
        .species = SPECIES_JOLTEON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanNorton[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanWalter[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_PONYTA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneSquirtle[] = {
    {
        .iv = 50,
        .lvl = 19,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 50,
        .lvl = 18,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 50,
        .lvl = 18,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 255,
        .lvl = 21,
        .species = SPECIES_WARTORTLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneBulbasaur[] = {
    {
        .iv = 50,
        .lvl = 19,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 50,
        .lvl = 18,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 50,
        .lvl = 18,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 255,
        .lvl = 21,
        .species = SPECIES_IVYSAUR,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneCharmander[] = {
    {
        .iv = 50,
        .lvl = 19,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 50,
        .lvl = 18,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 50,
        .lvl = 18,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 255,
        .lvl = 21,
        .species = SPECIES_CHARMELEON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokemonTowerSquirtle[] = {
    {
        .iv = 100,
        .lvl = 25,
        .species = SPECIES_SCYTHER,
    },
    {
        .iv = 100,
        .lvl = 23,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = SPECIES_EXEGGCUTE,
    },
    {
        .iv = 100,
        .lvl = 21,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 255,
        .lvl = 26,
        .species = SPECIES_WARTORTLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokemonTowerBulbasaur[] = {
    {
        .iv = 100,
        .lvl = 25,
        .species = SPECIES_SCYTHER,
    },
    {
        .iv = 100,
        .lvl = 23,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 100,
        .lvl = 21,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 255,
        .lvl = 26,
        .species = SPECIES_IVYSAUR,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokemonTowerCharmander[] = {
    {
        .iv = 100,
        .lvl = 25,
        .species = SPECIES_SCYTHER,
    },
    {
        .iv = 100,
        .lvl = 23,
        .species = SPECIES_EXEGGCUTE,
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 100,
        .lvl = 21,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 255,
        .lvl = 26,
        .species = SPECIES_CHARMELEON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphSquirtle[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_SCYTHER,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_EXEGGCUTE,
    },
    {
        .iv = 100,
        .lvl = 36,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 255,
        .lvl = 40,
        .species = SPECIES_BLASTOISE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphBulbasaur[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_SCYTHER,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 100,
        .lvl = 36,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 255,
        .lvl = 40,
        .species = SPECIES_VENUSAUR,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphCharmander[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_SCYTHER,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_EXEGGCUTE,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 100,
        .lvl = 36,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 255,
        .lvl = 40,
        .species = SPECIES_CHARIZARD,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RivalRoute22LateSquirtle[] = {
    {
        .iv = 150,
        .lvl = 47,
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_X_SCISSOR, MOVE_WING_ATTACK, MOVE_STEEL_WING, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = SPECIES_UMBREON,
        .moves = {MOVE_FAINT_ATTACK, MOVE_PROTECT, MOVE_TOXIC, MOVE_MOONLIGHT},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_FLAME_WHEEL, MOVE_AERIAL_ACE, MOVE_IRON_TAIL, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = 150,
        .lvl = 47,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FIRE_PUNCH, MOVE_SHOCK_WAVE},
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SKULL_BASH, MOVE_BITE, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RivalRoute22LateBulbasaur[] = {
    {
        .iv = 150,
        .lvl = 47,
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_X_SCISSOR, MOVE_WING_ATTACK, MOVE_STEEL_WING, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = SPECIES_UMBREON,
        .moves = {MOVE_FAINT_ATTACK, MOVE_PROTECT, MOVE_TOXIC, MOVE_MOONLIGHT},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_TWISTER, MOVE_CRUNCH, MOVE_FACADE},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_FLAME_WHEEL, MOVE_AERIAL_ACE, MOVE_IRON_TAIL, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 150,
        .lvl = 47,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FIRE_PUNCH, MOVE_SHOCK_WAVE},
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RivalRoute22LateCharmander[] = {
    {
        .iv = 150,
        .lvl = 53,
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_X_SCISSOR, MOVE_WING_ATTACK, MOVE_STEEL_WING, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 150,
        .lvl = 51,
        .species = SPECIES_UMBREON,
        .moves = {MOVE_FAINT_ATTACK, MOVE_PROTECT, MOVE_TOXIC, MOVE_MOONLIGHT},
    },
    {
        .iv = 150,
        .lvl = 51,
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = 150,
        .lvl = 53,
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_TWISTER, MOVE_CRUNCH, MOVE_FACADE},
    },
    {
        .iv = 150,
        .lvl = 53,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FIRE_PUNCH, MOVE_SHOCK_WAVE},
    },
    {
        .iv = 250,
        .lvl = 56,
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_STEEL_WING, MOVE_ROCK_TOMB},
    },
};

static const struct TrainerMonItemCustomMoves sParty_ChampionFirstSquirtle[] = {
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_AERIAL_ACE, MOVE_X_SCISSOR, MOVE_STEEL_WING, MOVE_HYPER_BEAM},
    },
    {
        .iv = 255,
        .lvl = 60,
        .species = SPECIES_UMBREON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_FAINT_ATTACK, MOVE_PROTECT, MOVE_MOONLIGHT, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH},
    },
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_CRUNCH},
    },
    {
        .iv = 255,
        .lvl = 64,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTHQUAKE, MOVE_SKULL_BASH, MOVE_ICE_BEAM},
    },
};

static const struct TrainerMonItemCustomMoves sParty_ChampionFirstBulbasaur[] = {
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_AERIAL_ACE, MOVE_X_SCISSOR, MOVE_STEEL_WING, MOVE_HYPER_BEAM},
    },
    {
        .iv = 255,
        .lvl = 60,
        .species = SPECIES_UMBREON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_FAINT_ATTACK, MOVE_PROTECT, MOVE_MOONLIGHT, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH},
    },
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE, MOVE_EARTHQUAKE, MOVE_TWISTER},
    },
    {
        .iv = 255,
        .lvl = 64,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_CRUNCH},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_LIECHI_BERRY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SLEEP_POWDER},
    },
};

static const struct TrainerMonItemCustomMoves sParty_ChampionFirstCharmander[] = {
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_AERIAL_ACE, MOVE_X_SCISSOR, MOVE_STEEL_WING, MOVE_HYPER_BEAM},
    },
    {
        .iv = 255,
        .lvl = 60,
        .species = SPECIES_UMBREON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_FAINT_ATTACK, MOVE_PROTECT, MOVE_MOONLIGHT, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH},
    },
    {
        .iv = 255,
        .lvl = 62,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = 255,
        .lvl = 64,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE, MOVE_EARTHQUAKE, MOVE_TWISTER},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_PETAYA_BERRY,
        .moves = {MOVE_FIRE_BLAST, MOVE_AERIAL_ACE, MOVE_SLASH, MOVE_DRAGON_CLAW},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerPatricia[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_MEDITITE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerCarly[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerHope[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerPaula[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerLaurel[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_DUSKULL,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_DUSKULL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJody[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerTammy[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MISDREAVUS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerRuth[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MEDITITE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerKarina[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_DUSKULL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJanae[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerAngelica[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_DUSKULL,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MISDREAVUS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerEmilia[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_CHIMECHO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJennifer[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler1[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler2[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler3[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler4[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler5[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler6[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler7[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler8[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerAmanda[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_MIMIKYU,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_MIMIKYU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerStacy[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_BANETTE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerTasha[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MISDREAVUS,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MISDREAVUS,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerJeremy[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_ARON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlma[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_QUAGSIRE,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WARTORTLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SUDOWOODO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerValerie[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_VENONAT,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_VENONAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerGwen[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_STANTLER,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_STANTLER,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerVirgil[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperFlint[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIrene[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_CORSOLA,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEEL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerDana[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_ODDISH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAriana[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_BELLSPROUT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerLeah[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_CLEFAIRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJustin[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_NIDORINO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerYazmin[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_STANTLER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_NinjaBoyKindra[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_ARIADOS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_NinjaBoyKeigo[] = {
    {
        .iv = 255,
        .lvl = 37,
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_TOXIC},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanBrooks[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_LUXIO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanLamar[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SHINX,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_PONYTA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsEliAnne[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_JIGGLYPUFF,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CoolCoupleRayTyra[] = {
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SUPERPOWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_TOXIC},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGAHORN, MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLAMETHROWER, MOVE_QUICK_ATTACK, MOVE_DIG, MOVE_CURSE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsKiriJan[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_QUILAVA,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CROCONAW,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya[] = {
    {
        .iv = 50,
        .lvl = 33,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 33,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleLeaJed[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_RAPIDASH,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLiaLuc[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_CORSOREEF,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_CURSOLA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher4[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher5[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher6[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher7[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher8[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_PONYTA,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_LEDIAN,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen4[] = {
    {
        .iv = 120,
        .lvl = 48,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 120,
        .lvl = 48,
        .species = SPECIES_RAPIDASH,
    },
    {
        .iv = 120,
        .lvl = 48,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 120,
        .lvl = 48,
        .species = SPECIES_LEDIAN,
    },
    {
        .iv = 120,
        .lvl = 48,
        .species = SPECIES_ARBOK,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad2[] = {
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_SANDSHREW,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassReli2[] = {
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassReli3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_NIDORINA,
    },
        {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_AZUMARILL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy2[] = {
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_TEDDIURSA,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy3[] = {
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_TEDDIURSA,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy4[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_URSARING,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_LUXRAY,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice2[] = {
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_JUMPLUFF,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad4[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerFranklin2[] = {
    {
        .iv = 40,
        .lvl = 25,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 40,
        .lvl = 25,
        .species = SPECIES_GEOWATT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnProfProfOak[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerBrendan[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerMay[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerRed[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerLeaf[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt42[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_HOUNDOUR,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_HOUNDOUR,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PsychicJaclyn[] = {
    {
        .iv = 220,
        .lvl = 61,
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_WISH},
    },
    {
        .iv = 220,
        .lvl = 61,
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_DRILL_PECK, MOVE_GIGA_DRAIN, MOVE_WISH},
    },
    {
        .iv = 220,
        .lvl = 62,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 220,
        .lvl = 63,
        .species = SPECIES_DECIBELLE,
        .moves = {MOVE_PSYCHIC, MOVE_MIRROR_SHOT, MOVE_HEAL_BELL, MOVE_YAWN},
    },
    {
        .iv = 220,
        .lvl = 65,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon[] = {
    {
        .iv = 50,
        .lvl = 45,
        .species = SPECIES_MLLOY,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TuberAmira[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_POLIWRATH,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnBreederAlize[] = {
    {
        .iv = 30,
        .lvl = 52,
        .species = SPECIES_RAICHU,
        .moves = {MOVE_SURF, MOVE_QUICK_ATTACK, MOVE_THUNDER, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 57,
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 55,
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_STRENGTH, MOVE_ROCK_SMASH, MOVE_DIG, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 54,
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 53,
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_STRENGTH, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 56,
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_MIRROR_COAT, MOVE_SAFEGUARD, MOVE_DESTINY_BOND, MOVE_COUNTER},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerNicolas[] = {
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SWEET_SCENT, MOVE_WRAP},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerMadeline[] = {
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_GLOOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_ACID, MOVE_SWEET_SCENT, MOVE_POISON_POWDER},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUN_SPORE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyNikki[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_BRELOOM,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_BRELOOM,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacStanly[] = {
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_CLAYDOL,
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_NOSEPASS,
    },
};

static const struct TrainerMonItemCustomMoves sParty_LadyJacki[] = {
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_JUMPLUFF,
        .heldItem = ITEM_STARDUST,
        .moves = {MOVE_SLEEP_POWDER, MOVE_AERIAL_ACE, MOVE_LEECH_LIFE, MOVE_GIGA_DRAIN},
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_RAPIDASH,
        .heldItem = ITEM_STARDUST,
        .moves = {MOVE_FIRE_BLAST, MOVE_BOUNCE, MOVE_STOMP, MOVE_DOUBLE_KICK},
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_GARDEVOIR,
        .heldItem = ITEM_STARDUST,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = 0,
        .lvl = 57,
        .species = SPECIES_CORSOREEF,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN},
    },
    {
        .iv = 0,
        .lvl = 59,
        .species = SPECIES_PURUGLY,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_BODY_SLAM, MOVE_BURNING_SAND, MOVE_REST, MOVE_SLEEP_TALK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PainterDaisy[] = {
    {
        .iv = 50,
        .lvl = 60,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_SPORE, MOVE_BATON_PASS, MOVE_SUBSTITUTE, MOVE_BELLY_DRUM},
    },
    {
        .iv = 50,
        .lvl = 60,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_PURSUIT, MOVE_DRAIN_PUNCH},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerGoon[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_TOXIC, MOVE_FLAMETHROWER},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHOCK_WAVE, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_WING_ATTACK, MOVE_BITE, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_PINSIR,
        .moves = {MOVE_SUBMISSION, MOVE_GUILLOTINE, MOVE_ROCK_TOMB, MOVE_SWORDS_DANCE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerGoon2[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_FAINT_ATTACK, MOVE_BRICK_BREAK, MOVE_PURSUIT, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_HOWL, MOVE_DIG},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerGoon3[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_MUK,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_FLAREON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Biker2[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherAnthony[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_SPINARAK,
    },
    {
        .iv = 0,
        .lvl = 8,
        .species = SPECIES_SPINARAK,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherCharlie[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_METAPOD,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsEliAnne2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_JIGGLYPUFF,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJohnson[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_MIMIKYU,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BikerRicardo[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SLUDGE, MOVE_POUND, MOVE_HARDEN, MOVE_MINIMIZE},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_HOUNDOUR,
        .moves = {MOVE_EMBER, MOVE_SMOG, MOVE_PURSUIT, MOVE_HOWL},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaren[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_CROAGUNK,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GOLBAT,
    },
};
//after elite 4 should be tweaked
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt43[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_CUBONE,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAROWAK,
    },
};
//after elite 4 should be tweaked
static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt44[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SANDSLASH,
    },
};
//Ice Cave Will Become Executive, vllt Euxinos geben?
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt45[] = {
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_URSARING,
        .moves = {MOVE_THRASH, MOVE_FAINT_ATTACK, MOVE_EARTHQUAKE, MOVE_ROCK_SMASH},
    },
    {
        .iv = 150,
        .lvl = 57,
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_REST, MOVE_SLEEP_TALK},
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_DRILL_PECK, MOVE_FAINT_ATTACK, MOVE_SHADOW_BALL, MOVE_HAZE},
    },
    {
        .iv = 150,
        .lvl = 59,
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_CRUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_BRICK_BREAK, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT, MOVE_AERIAL_ACE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt46[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MUK,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt47[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt48[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_HYPNO,
    },
};
//ARIANA
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketAdmin[] = {
    {
        .iv = 150,
        .lvl = 55,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SPIKES, MOVE_SURF, MOVE_TOXIC},
    },
    {
        .iv = 150,
        .lvl = 57,
        .species = SPECIES_TOXIBRO,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_PSYCHIC, MOVE_DIVE},
    },
    {
        .iv = 150,
        .lvl = 56,
        .species = SPECIES_ARBOK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER},
    },
    {
        .iv = 200,
        .lvl = 58,
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_EARTHQUAKE},
    },
    {
        .iv = 150,
        .lvl = 61,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLUDGE_BOMB, MOVE_TOXIC},
    },
};
//ARCHER
static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketAdmin2[] = {
    {
        .iv = 200,
        .lvl = 59,
        .species = SPECIES_PINSIR,
        .moves = {MOVE_X_SCISSOR, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
    },
    {
        .iv = 200,
        .lvl = 60,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_SHADOW_BALL},
    },
    {
        .iv = 200,
        .lvl = 59,
        .species = SPECIES_BITEMARE,
        .moves = {MOVE_CRUNCH, MOVE_BRICK_BREAK, MOVE_ANCIENT_POWER, MOVE_POISON_FANG},
    },
    {
        .iv = 150,
        .lvl = 59,
        .species = SPECIES_GEMGEIST,
        .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_TOXIC, MOVE_DETECT},
    },
    {
        .iv = 200,
        .lvl = 62,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_SHADOW_BALL},
    },
    {
        .iv = 200,
        .lvl = 64,
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_SURF, MOVE_FLAMETHROWER},
    },
};
//boss
static const struct TrainerMonNoItemCustomMoves sParty_ScientistGideon[] = {
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_PSYCHIC, MOVE_SHOCK_WAVE, MOVE_RECOVER, MOVE_CALM_MIND},
    },
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_X_SCISSOR, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK},
    },
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_CRADILY,
        .moves = {MOVE_ANCIENT_POWER, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
    },
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
    },
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_TRI_ATTACK, MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_MIRROR_SHOT},
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_EUXINOS,
        .moves = {MOVE_POISON_FANG, MOVE_ANCIENT_POWER, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAmara[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_HUNTAIL,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_GOREBYSS,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_DEWGONG,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMaria[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_LUVDISC,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_CORSOLA,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_LUVDISC,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_CLAMPERL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAbigail[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_CORSOLA,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_CLAMPERL,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_LUVDISC,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleFinn[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_CARVANHA,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_CARVANHA,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_SHARPEDO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleGarrett[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_CORPHISH,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_CRAWDAUNT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanTommy[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_BARBOACH,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_BARBOACH,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_RELICANTH,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_WHISCASH,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_RELICANTH,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya[] = {
    {
        .iv = 50,
        .lvl = 41,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 41,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea[] = {
    {
        .iv = 100,
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh[] = {
    {
        .iv = 100,
        .lvl = 41,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 41,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_KindlerBryce[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_NUMEL,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_NUMEL,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_WEEZING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerClaire[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SKITTY,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_DELCATTY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia[] = {
    {
        .iv = 50,
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 42,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyViolet[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_CHIKORITA,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_BAYLEEF,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_MEGANIUM,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TuberAlexis[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_LUVDISC,
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_LUVDISC,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsJoyMeg[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_SENTRET,
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_FURRET,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleTisha[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_CRAWDAUNT,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_KINGLER,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PainterCelina[] = {
    {
        .iv = 50,
        .lvl = 60,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_FLY, MOVE_DIG, MOVE_DIVE, MOVE_BOUNCE},
    },
    {
        .iv = 50,
        .lvl = 60,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_SPORE, MOVE_SHEER_COLD, MOVE_LOCK_ON, MOVE_SUBSTITUTE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PainterRayna[] = {
    {
        .iv = 50,
        .lvl = 60,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT},
    },
};

static const struct TrainerMonItemCustomMoves sParty_LadyGillian[] = {
    {
        .iv = 0,
        .lvl = 58,
        .species = SPECIES_DECIBELLE,
        .heldItem = ITEM_STARDUST,
        .moves = {MOVE_PSYCHIC, MOVE_MIRROR_SHOT, MOVE_CALM_MIND, MOVE_SHOCK_WAVE},
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_MISMAGIUS,
        .heldItem = ITEM_STARDUST,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND},
    },
    {
        .iv = 0,
        .lvl = 58,
        .species = SPECIES_DELCATTY,
        .heldItem = ITEM_STARDUST,
        .moves = {MOVE_HEAL_BELL, MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_LUVDISC,
        .heldItem = ITEM_STARDUST,
        .moves = {MOVE_SWEET_KISS, MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_ATTRACT},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_AMPHAROS,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_YoungsterDestin[] = {
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_FLY, MOVE_STEEL_WING, MOVE_STRENGTH, MOVE_FEATHER_DANCE},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_EARTHQUAKE, MOVE_PAIN_SPLIT, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_AMNESIA},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_EXTRASENSORY, MOVE_AERIAL_ACE, MOVE_GIGA_DRAIN, MOVE_FACADE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_SwimmerMaleToby[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_FLAIL},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BRICK_BREAK, MOVE_STRENGTH, MOVE_WATER_PULSE, MOVE_HYPNOSIS},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_WAILORD,
        .moves = {MOVE_WATER_SPOUT, MOVE_AMNESIA, MOVE_REST, MOVE_SLEEP_TALK},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_ATTRACT},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_POLITOED,
        .moves = {MOVE_WATERFALL, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_HYPNOSIS},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt49[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GRIMER,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_TeamRocketGrunt50[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_MEMENTO, MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELF_DESTRUCT},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt51[] = {
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_GLOOM,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BirdKeeperMilo[] = {
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_VOLTREAN,
        .moves = {MOVE_FLY, MOVE_SPARK, MOVE_DIVE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = 0,
        .lvl = 57,
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_FLY, MOVE_SURF, MOVE_SHOCK_WAVE, MOVE_ICE_BEAM},
    },
    {
        .iv = 0,
        .lvl = 57,
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_FLY, MOVE_FLAME_WHEEL, MOVE_SLASH, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 0,
        .lvl = 59,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_FLY, MOVE_STRENGTH, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 0,
        .lvl = 59,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_FLY, MOVE_STRENGTH, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BirdKeeperChaz[] = {
    {
        .iv = 0,
        .lvl = 57,
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_FLY, MOVE_FLAME_WHEEL, MOVE_SLASH, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 0,
        .lvl = 59,
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_FLY, MOVE_STEEL_WING, MOVE_SPIKES, MOVE_CUT},
    },
    {
        .iv = 0,
        .lvl = 59,
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_FLY, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE},
    },
    {
        .iv = 0,
        .lvl = 61,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_FURY_ATTACK, MOVE_FURY_SWIPES, MOVE_SUBSTITUTE, MOVE_AGILITY},
    },
    {
        .iv = 0,
        .lvl = 61,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_FURY_ATTACK, MOVE_FURY_SWIPES, MOVE_SUBSTITUTE, MOVE_SWORDS_DANCE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BirdKeeperHarold[] = {
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_VOLTREAN,
        .moves = {MOVE_FLY, MOVE_SPARK, MOVE_DIVE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = 0,
        .lvl = 57,
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_FLY, MOVE_SURF, MOVE_SHOCK_WAVE, MOVE_ICE_BEAM},
    },
    {
        .iv = 0,
        .lvl = 57,
        .species = SPECIES_XATU,
        .moves = {MOVE_DRILL_PECK, MOVE_WISH, MOVE_PSYCHIC, MOVE_OMINOUS_WIND},
    },
    {
        .iv = 0,
        .lvl = 59,
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_FLY, MOVE_DREAM_EATER, MOVE_OMINOUS_WIND, MOVE_HYPNOSIS},
    },
    {
        .iv = 0,
        .lvl = 59,
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_FLY, MOVE_DREAM_EATER, MOVE_OMINOUS_WIND, MOVE_HYPNOSIS},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanTylor[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_QWILFISH,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_QWILFISH,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_RELICANTH,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_WHISCASH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMymo[] = {
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_KINGLER,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_CRAWDAUNT,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_PELIPPER,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_SHARPEDO,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_BLASTOISE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNicole[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_AZUMARILL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroAvaGeb[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyRose[] = {
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_LEAFEON,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_ROSERADE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSamir[] = {
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleDenise[] = {
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_LANTURN,
    },
    {
        .iv = 0,
        .lvl = 56,
        .species = SPECIES_LANTURN,
    },
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = 0,
        .lvl = 57,
        .species = SPECIES_GOREBYSS,
    },
    {
        .iv = 0,
        .lvl = 57,
        .species = SPECIES_HUNTAIL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsMiuMia[] = {
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_PIKACHU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerEarl[] = {
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_GEOWATT,
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_HARIYAMA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacFoster[] = {
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_GOLEM,
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_GEOWATT,
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_NOSEPASS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLarry[] = {
    {
        .iv = 0,
        .lvl = 58,
        .species = SPECIES_XATU,
    },
    {
        .iv = 0,
        .lvl = 58,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 58,
        .species = SPECIES_XATU,
    },
    {
        .iv = 0,
        .lvl = 58,
        .species = SPECIES_NOSEPASS,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerDaryl[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_MEDICHAM,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHector[] = {
    {
        .iv = 30,
        .lvl = 64,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = 30,
        .lvl = 64,
        .species = SPECIES_KANGASKHAN,
    },
    {
        .iv = 30,
        .lvl = 64,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 30,
        .lvl = 66,
        .species = SPECIES_EXPLOUD,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PsychicDario[] = {
    {
        .iv = 100,
        .lvl = 52,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODOR_SLEUTH, MOVE_AGILITY},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PsychicRodette[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_NATU,
        .moves = {MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyMiah[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_BELLOSSOM,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_BELLOSSOM,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleEveJon[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_PSYDUCK,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_JugglerMason[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_PINECO,
        .moves = {MOVE_SPIKES, MOVE_BIDE, MOVE_RAPID_SPIN, MOVE_TAKE_DOWN},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_PINECO,
        .moves = {MOVE_SPIKES, MOVE_BIDE, MOVE_RAPID_SPIN, MOVE_EXPLOSION},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy[] = {
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlJocelyn[] = {
    {
        .iv = 50,
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 44,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEvan[] = {
    {
        .iv = 40,
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 40,
        .lvl = 48,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = 40,
        .lvl = 49,
        .species = SPECIES_URSARING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark2[] = {
    {
        .iv = 90,
        .lvl = 44,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 90,
        .lvl = 44,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 90,
        .lvl = 44,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = 90,
        .lvl = 44,
        .species = SPECIES_BITEMARE,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerLogan[] = {
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ANCIENT_POWER, MOVE_MAGNITUDE, MOVE_ROCK_SMASH},
    },
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_EGG_BOMB, MOVE_GIGA_DRAIN, MOVE_PSYBEAM, MOVE_HYPNOSIS},
    },
    {
        .iv = 100,
        .lvl = 45,
        .species = SPECIES_CORSOREEF,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_RECOVER},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerJackson[] = {
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SLAM, MOVE_MEGA_DRAIN, MOVE_BIND, MOVE_INGRAIN},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_CONFUSION, MOVE_POISON_POWDER, MOVE_BARRAGE, MOVE_REFLECT},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_STOMP},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerBeth[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_ROSELIA,
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RAICHU,
    },
    {
        .iv = 100,
        .lvl = 44,
        .species = SPECIES_GLOOM,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerKatelyn[] = {
    {
        .iv = 100,
        .lvl = 52,
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerLeroy[] = {
    {
        .iv = 100,
        .lvl = 47,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE},
    },
    {
        .iv = 100,
        .lvl = 47,
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_SEISMIC_TOSS},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_URSARING,
        .moves = {MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_SNORE, MOVE_REST},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerMichelle[] = {
    {
        .iv = 100,
        .lvl = 47,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_SLASH, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_BITE},
    },
    {
        .iv = 100,
        .lvl = 47,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_TAKE_DOWN, MOVE_ICY_WIND, MOVE_GROWL},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_GRUDGE},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODOR_SLEUTH},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CoolCoupleLexNya[] = {
    {
        .iv = 100,
        .lvl = 52,
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 100,
        .lvl = 52,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_THRASH, MOVE_HORN_ATTACK, MOVE_PURSUIT, MOVE_SWAGGER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacBrandon[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_ONIX,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RuinManiacBenjamin[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROLLOUT, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PainterEdna[] = {
    {
        .iv = 50,
        .lvl = 50,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_FAKE_OUT, MOVE_EXTREME_SPEED, MOVE_PROTECT, MOVE_QUICK_ATTACK},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanClifford[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_GOLDUCK,
    },
};

static const struct TrainerMonItemCustomMoves sParty_LadySelphy[] = {
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_PAY_DAY, MOVE_BITE, MOVE_TAUNT, MOVE_TORMENT},
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_ROSERADE,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE},
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_BLISSEY,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_ICE_BEAM, MOVE_SOFT_BOILED},
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_ESPATHRA,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_LUMINA_CRASH, MOVE_SHOCK_WAVE, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_ROCK_SMASH},
    },
    {
        .iv = 0,
        .lvl = 69,
        .species = SPECIES_VAPOREON,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_REST, MOVE_SLEEP_TALK},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_RuinManiacLawson[] = {
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_MIRROR_SHOT, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_SPIKES},
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_SHELGON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_HEADBUTT},
    },
    {
        .iv = 0,
        .lvl = 69,
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ANCIENT_POWER, MOVE_OMINOUS_WIND},
    },
    {
        .iv = 0,
        .lvl = 69,
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SURF, MOVE_ANCIENT_POWER, MOVE_X_SCISSOR, MOVE_BRICK_BREAK},
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_PSYCHIC},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PsychicLaura[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_CALM_MIND},
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_THUNDERBOLT, MOVE_BARRIER_BASH, MOVE_STOMP, MOVE_HYPNOSIS},
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_MORNING_SUN, MOVE_CALM_MIND},
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_DRILL_PECK, MOVE_GIGA_DRAIN, MOVE_QUICK_ATTACK},
    },
    {
        .iv = 100,
        .lvl = 65,
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_HYPER_VOICE, MOVE_SING, MOVE_CURSE, MOVE_BRICK_BREAK},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederBethany[] = {
    {
        .iv = 30,
        .lvl = 60,
        .species = SPECIES_CHANSEY,
    },
    {
        .iv = 30,
        .lvl = 60,
        .species = SPECIES_CHANSEY,
    },
    {
        .iv = 30,
        .lvl = 60,
        .species = SPECIES_CHANSEY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAllison[] = {
    {
        .iv = 30,
        .lvl = 68,
        .species = SPECIES_CLEFABLE,
    },
    {
        .iv = 30,
        .lvl = 68,
        .species = SPECIES_CLEFABLE,
    },
    {
        .iv = 30,
        .lvl = 68,
        .species = SPECIES_CLEFABLE,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_ChampAlder[] = {
    {
        .iv = 0,
        .lvl = 75,
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_SUPERPOWER, MOVE_CRUSH_CLAW, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
    },
    {
        .iv = 0,
        .lvl = 75,
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_BLIZZARD, MOVE_MIRROR_SHOT, MOVE_LIGHT_SCREEN, MOVE_MILK_DRINK},
    },
    {
        .iv = 0,
        .lvl = 75,
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_SHADOW_BALL, MOVE_SILVER_WIND, MOVE_GIGA_DRAIN, MOVE_AERIAL_ACE},
    },
    {
        .iv = 0,
        .lvl = 75,
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_QUICK_ATTACK, MOVE_ROCK_SMASH, MOVE_SWORDS_DANCE},
    },
    {
        .iv = 0,
        .lvl = 75,
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_PSYCHIC, MOVE_RECOVER, MOVE_REFLECT, MOVE_TOXIC},
    },
    {
        .iv = 0,
        .lvl = 77,
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_FIERY_DANCE, MOVE_SILVER_WIND, MOVE_MEGA_DRAIN, MOVE_BRICK_BREAK},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherJonah[] = {
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_SCYTHER,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_SCYTHER,
    },
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_FORRETRESS,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_VESPIQUEN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherVance[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_VENOMOTH,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_HERACROSS,
    },
};
//konner, maybe too much
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterNash[] = {
    {
        .iv = 0,
        .lvl = 77,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = 0,
        .lvl = 77,
        .species = SPECIES_GEKOPON,
    },
    {
        .iv = 0,
        .lvl = 79,
        .species = SPECIES_CHARIZARD,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterCordell[] = {
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_MLLOY,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_MLLOY,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_MLLOY,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_DODRIO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassDalia[] = {
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_DELCATTY,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_SHUCKLE,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_SHUCKLE,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_BRELOOM,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_BRELOOM,
    },
};
//celia
static const struct TrainerMonNoItemDefaultMoves sParty_LassJoana[] = {
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_ALTARIA,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_AMPHAROS,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_GRANBULL,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_UMBREON,
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_MEGANIUM,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRiley[] = {
    {
        .iv = 0,
        .lvl = 69,
        .species = SPECIES_PINSIR,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = 0,
        .lvl = 69,
        .species = SPECIES_PINSIR,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = 0,
        .lvl = 69,
        .species = SPECIES_LURANTIS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMarcy[] = {
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_PARASECT,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_PARASECT,
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_PARASECT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLayton[] = {
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_AGGRON,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_AGGRON,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_AGGRON,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey2[] = {
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_VOLTREL,
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_CLEFAIRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_VILEPLUME,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_VOLTREAN,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_CLEFABLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey4[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_VILEPLUME,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_VOLTREAN,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_CLEFABLE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky2[] = {
    {
        .iv = 20,
        .lvl = 22,
        .species = SPECIES_CROCONAW,
    },
    {
        .iv = 20,
        .lvl = 22,
        .species = SPECIES_TEDDIURSA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky3[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_CROCONAW,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_DUGTRIO,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_URSARING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky4[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_FERALIGATR,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_DUGTRIO,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_URSARING,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_REUNICLUS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff2[] = {
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_FLAAFFY,
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_FLAAFFY,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_VOLTREAN,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff4[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_AMPHAROS,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_VOLTREAN,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_CORSOREEF,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle2[] = {
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_SNUBBULL,
    },
    {
        .iv = 20,
        .lvl = 18,
        .species = SPECIES_SNUBBULL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_GRANBULL,
    },
    {
        .iv = 60,
        .lvl = 26,
        .species = SPECIES_GRANBULL,
    },
    {
        .iv = 60,
        .lvl = 26,
        .species = SPECIES_SLOWPOKE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle4[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_GRANBULL,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_GRANBULL,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_TOXIBRO,
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_PIDGEOT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu2[] = {
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_QUAGSIRE,
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_QUAGSIRE,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBernie2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_TINKATUFF,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MACHOKE, 
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MAGNETON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerDarian2[] = {
    {
        .iv = 60,
        .lvl = 33,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 60,
        .lvl = 33,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 60,
        .lvl = 35,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris2[] = {
    {
        .iv = 40,
        .lvl = 24,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 40,
        .lvl = 24,
        .species = SPECIES_GRAVELER,
    },
    {
        .iv = 40,
        .lvl = 24,
        .species = SPECIES_CHARMELEON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_GRAVELER,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_CHARMELEON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris4[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_ARCANINE,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_GEOWATT,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_LUXRAY,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_CHARIZARD,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia2[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 40,
        .lvl = 28,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia3[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 60,
        .lvl = 37,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia4[] = {
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_VILEPLUME,
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_VICTREEBEL,
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_VILEPLUME,
    },
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_VICTREEBEL,
    },
    {
        .iv = 60,
        .lvl = 55,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 120,
        .lvl = 57,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerJeremy2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_HARIYAMA,
    },
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_LAIRON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark3[] = {
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_RHYDON,
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_TALONFLAME,
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_BITEMARE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman2[] = {
    {
        .iv = 90,
        .lvl = 29,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 90,
        .lvl = 29,
        .species = SPECIES_SLOWBRO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman3[] = {
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_SLOWBRO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerTrent2[] = {
    {
        .iv = 60,
        .lvl = 37,
        .species = SPECIES_CUBONE,
    },
    {
        .iv = 60,
        .lvl = 37,
        .species = SPECIES_HARIYAMA,
    },
    {
        .iv = 60,
        .lvl = 37,
        .species = SPECIES_GOLEM,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan2[] = {
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 40,
        .lvl = 23,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 40,
        .lvl = 21,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_PIKACHU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan3[] = {
    {
        .iv = 80,
        .lvl = 46,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdGlenn2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MUK,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MUK,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerRich2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_FLETCHINDER,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaren2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_CROAGUNK,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_ELEKID,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanElliot2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RockerLuca2[] = {
    {
        .iv = 60,
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 60,
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 60,
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautySheila2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_JUMPLUFF,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_VOLTREAN,
    },
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_DODRIO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_TALONFLAME,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_TALONFLAME,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_VOLTREAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie2[] = {
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_SUDOWOODO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_NINETALES,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_SUDOWOODO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie4[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_NINETALES,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_SUDOWOODO,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerLukas2[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_TOXICROAK,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny2[] = {
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_MLLOY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny3[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MLLOY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_SKARMORY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon3[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_SKARMORY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyGrace2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_WIGGLYTUFF,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_NATU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester3[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_XATU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky2[] = {
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky3[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky4[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_RAICHU,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya2[] = {
    {
        .iv = 110,
        .lvl = 33,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 110,
        .lvl = 33,
        .species = SPECIES_MLLOY,
        .heldItem = ITEM_STICK,
    },
    {
        .iv = 110,
        .lvl = 33,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 110,
        .lvl = 33,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_STICK,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya3[] = {
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_STICK,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_STICK,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_GEOWATT,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya4[] = {
    {
        .iv = 180,
        .lvl = 57,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 57,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_STICK,
    },
    {
        .iv = 180,
        .lvl = 57,
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 57,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 57,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_STICK,
    },
    {
        .iv = 180,
        .lvl = 57,
        .species = SPECIES_GEOWATT,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerRuben2[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_WEEZING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCamron2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaxon2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallIsaiah2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_TAUROS,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MLLOY,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MACHAMP,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCorey2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MACHAMP,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_NOCTOWL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_NOCTOWL,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAlice2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_CORSOREEF,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDarrin2[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_STARMIE,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_VOLTREAN,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy3[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_STARMIE,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_VOLTREAN,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanWade2[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJack2[] = {
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_STARMIE,
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_KINGLER,
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_KINGLER,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan2[] = {
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan3[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleFinn2[] = {
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_SHARPEDO,
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_SHARPEDO,
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_SHARPEDO,
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon2[] = {
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_MLLOY,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon3[] = {
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_MLLOY,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya2[] = {
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya3[] = {
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea2[] = {
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea3[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh2[] = {
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh3[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia2[] = {
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia3[] = {
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TuberAmira2[] = {
    {
        .iv = 80,
        .lvl = 57,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 80,
        .lvl = 57,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 80,
        .lvl = 57,
        .species = SPECIES_PELIPPER,
    },
    {
        .iv = 80,
        .lvl = 57,
        .species = SPECIES_POLITOED,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsJoyMeg2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_FURRET,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_FURRET,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PainterRayna2[] = {
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_MACH_PUNCH, MOVE_ANCIENT_POWER, MOVE_SPORE, MOVE_DRAGON_DANCE},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_SPORE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_YoungsterDestin2[] = {
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_FLY, MOVE_DRAGON_CLAW, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_MORNING_SUN, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_EARTHQUAKE, MOVE_PAIN_SPLIT, MOVE_ICE_BEAM},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_AMNESIA},
    },
    {
        .iv = 255,
        .lvl = 58,
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_EXTRASENSORY, MOVE_AERIAL_ACE, MOVE_GIGA_DRAIN, MOVE_FACADE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnBreederAlize2[] = {
    {
        .iv = 30,
        .lvl = 56,
        .species = SPECIES_RAICHU,
        .moves = {MOVE_SURF, MOVE_QUICK_ATTACK, MOVE_THUNDER, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 62,
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 67,
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_STRENGTH, MOVE_ROCK_SMASH, MOVE_DIG, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 59,
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 58,
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_STRENGTH, MOVE_ATTRACT},
    },
    {
        .iv = 30,
        .lvl = 61,
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_MIRROR_COAT, MOVE_SAFEGUARD, MOVE_DESTINY_BOND, MOVE_COUNTER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_NIDORINA,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_MILTANK,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_TAUROS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes3[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_MILTANK,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_DONPHAN,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_NIDOQUEEN,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_TAUROS,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BirdKeeperMilo2[] = {
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_VOLTREAN,
        .moves = {MOVE_FLY, MOVE_SPARK, MOVE_DIVE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_FLY, MOVE_SURF, MOVE_SHOCK_WAVE, MOVE_ICE_BEAM},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_FLY, MOVE_FLAME_WHEEL, MOVE_SLASH, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_FLY, MOVE_STRENGTH, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_FLY, MOVE_STRENGTH, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_FURY_ATTACK, MOVE_FURY_SWIPES, MOVE_SUBSTITUTE, MOVE_SWORDS_DANCE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BirdKeeperChaz2[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_FLY, MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_FLY, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE},
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_FLY, MOVE_STEEL_WING, MOVE_SPIKES, MOVE_CUT},
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_VOLTREAN,
        .moves = {MOVE_AERIAL_ACE, MOVE_THUNDER, MOVE_DIVE, MOVE_AGILITY},
    },
    {
        .iv = 0,
        .lvl = 67,
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK},
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_FLY, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_PRESENT},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_BirdKeeperHarold2[] = {
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_VOLTREAN,
        .moves = {MOVE_FLY, MOVE_SPARK, MOVE_DIVE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_FLY, MOVE_SURF, MOVE_SHOCK_WAVE, MOVE_ICE_BEAM},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_XATU,
        .moves = {MOVE_DRILL_PECK, MOVE_WISH, MOVE_PSYCHIC, MOVE_OMINOUS_WIND},
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_FLY, MOVE_DREAM_EATER, MOVE_OMINOUS_WIND, MOVE_HYPNOSIS},
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_FLY, MOVE_DREAM_EATER, MOVE_OMINOUS_WIND, MOVE_HYPNOSIS},
    },
    {
        .iv = 0,
        .lvl = 66,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_FURY_ATTACK, MOVE_FURY_SWIPES, MOVE_SUBSTITUTE, MOVE_AGILITY},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNicole2[] = {
    {
        .iv = 255,
        .lvl = 69,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 255,
        .lvl = 69,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 255,
        .lvl = 69,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 255,
        .lvl = 69,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 255,
        .lvl = 69,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 255,
        .lvl = 69,
        .species = SPECIES_AZUMARILL,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PsychicJaclyn2[] = {
    {
        .iv = 220,
        .lvl = 66,
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_WISH},
    },
    {
        .iv = 220,
        .lvl = 66,
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_DRILL_PECK, MOVE_GIGA_DRAIN, MOVE_WISH},
    },
    {
        .iv = 220,
        .lvl = 67,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = 220,
        .lvl = 68,
        .species = SPECIES_DECIBELLE,
        .moves = {MOVE_PSYCHIC, MOVE_MIRROR_SHOT, MOVE_HEAL_BELL, MOVE_YAWN},
    },
    {
        .iv = 220,
        .lvl = 70,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSamir2[] = {
    {
        .iv = 0,
        .lvl = 72,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 72,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 72,
        .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerEarl2[] = {
    {
        .iv = 200,
        .lvl = 61,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = 200,
        .lvl = 61,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = 200,
        .lvl = 61,
        .species = SPECIES_GEOWATT,
    },
    {
        .iv = 200,
        .lvl = 61,
        .species = SPECIES_HARIYAMA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLarry2[] = {
    {
        .iv = 120,
        .lvl = 63,
        .species = SPECIES_XATU,
    },
    {
        .iv = 120,
        .lvl = 63,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 120,
        .lvl = 63,
        .species = SPECIES_XATU,
    },
    {
        .iv = 120,
        .lvl = 63,
        .species = SPECIES_NOSEPASS,
    },
    {
        .iv = 120,
        .lvl = 68,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHector2[] = {
    {
        .iv = 130,
        .lvl = 69,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = 130,
        .lvl = 69,
        .species = SPECIES_KANGASKHAN,
    },
    {
        .iv = 130,
        .lvl = 69,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 130,
        .lvl = 69,
        .species = SPECIES_EXPLOUD,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PsychicDario2[] = {
    {
        .iv = 220,
        .lvl = 56,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODOR_SLEUTH, MOVE_AGILITY},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PsychicRodette2[] = {
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_NATU,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT},
    },
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
    },
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerMason2[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_PINECO,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_PINECO,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerNicolas2[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_SLAM},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerMadeline2[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_SLEEP_POWDER},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUN_SPORE},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy2[] = {
    {
        .iv = 170,
        .lvl = 54,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 54,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 54,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEvan2[] = {
    {
        .iv = 160,
        .lvl = 52,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 160,
        .lvl = 52,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = 160,
        .lvl = 55,
        .species = SPECIES_URSARING,
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerJackson2[] = {
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SLAM, MOVE_MEGA_DRAIN, MOVE_BIND, MOVE_INGRAIN},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_STUN_SPORE, MOVE_REFLECT},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_STOMP},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_PkmnRangerKatelyn2[] = {
    {
        .iv = 220,
        .lvl = 56,
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerLeroy2[] = {
    {
        .iv = 220,
        .lvl = 52,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE},
    },
    {
        .iv = 220,
        .lvl = 52,
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL},
    },
    {
        .iv = 220,
        .lvl = 52,
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_SEISMIC_TOSS},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_URSARING,
        .moves = {MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_SNORE, MOVE_REST},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CooltrainerMichelle2[] = {
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_SLASH, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_BITE},
    },
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_TAKE_DOWN, MOVE_ICY_WIND, MOVE_SHEER_COLD},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_GRUDGE},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN},
    },
    {
        .iv = 220,
        .lvl = 56,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODOR_SLEUTH},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_CoolCoupleLexNya2[] = {
    {
        .iv = 220,
        .lvl = 57,
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 220,
        .lvl = 57,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_TAKE_DOWN, MOVE_SCARY_FACE, MOVE_PURSUIT, MOVE_SWAGGER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton2[] = {
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_LEDIAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton3[] = {
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_LEDIAN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton4[] = {
    {
        .iv = 120,
        .lvl = 51,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 120,
        .lvl = 51,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_LEDIAN,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_FORRETRESS,
    },
        {
        .iv = 120,
        .lvl = 56,
        .species = SPECIES_VESPIQUEN,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMatthew2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_KUJINOUGHT,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_KUJINOUGHT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleTony2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMelissa2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_POLITOED,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMonItemCustomMoves sParty_EliteFourLorelei2[] = {
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_YAWN},
    },
    {
        .iv = 255,
        .lvl = 64,
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_MYSTIC_WATER,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_FLAMETHROWER, MOVE_PSYCHIC},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_MILOTIC,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_RECOVER, MOVE_ATTRACT},
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_TWISTED_SPOON,
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_DREAM_EATER},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SURF, MOVE_REST},
    },
};

static const struct TrainerMonItemCustomMoves sParty_EliteFourBruno2[] = {
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_CRUNCH, MOVE_ROAR},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_SILVER_POWDER,
        .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_BRAVIARY,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_DRILL_PECK, MOVE_ROCK_TOMB, MOVE_BRICK_BREAK, MOVE_SUPERPOWER},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_METAL_COAT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROAR, MOVE_IRON_TAIL, MOVE_CRUNCH},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_PERSIM_BERRY,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_ROCK_SLIDE, MOVE_BULK_UP, MOVE_MACH_PUNCH},
    },
};

static const struct TrainerMonItemCustomMoves sParty_EliteFourAgatha2[] = {
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SHADOW_BALL, MOVE_PROTECT, MOVE_TOXIC, MOVE_THUNDERBOLT},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_DUSCLOPS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_PAIN_SPLIT},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_KROLUCARD,
        .heldItem = ITEM_BLACK_GLASSES,
        .moves = {MOVE_DRAIN_LIFE, MOVE_EXTRASENSORY, MOVE_GIGA_DRAIN, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FLAMETHROWER, MOVE_EARTHQUAKE, MOVE_POISON_TAIL, MOVE_TOXIC},
    },
    {
        .iv = 255,
        .lvl = 70,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_HYPNOSIS, MOVE_GIGA_DRAIN},
    },
};

static const struct TrainerMonItemCustomMoves sParty_EliteFourLance2[] = {
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_HAXORUS,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_OUTRAGE},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_PERSIM_BERRY,
        .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_OUTRAGE},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_REST, MOVE_DRAGON_BREATH, MOVE_TWISTER, MOVE_OCTAZOOKA},
    },
    {
        .iv = 255,
        .lvl = 70,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_HARD_STONE,
        .moves = {MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER, MOVE_TWISTER, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_DANCE, MOVE_TWISTER, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMonItemCustomMoves sParty_ChampionRematchSquirtle[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_RAIN_DANCE},
    },
};

static const struct TrainerMonItemCustomMoves sParty_ChampionRematchBulbasaur[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY},
    },
};

static const struct TrainerMonItemCustomMoves sParty_ChampionRematchCharmander[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM},
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_Paxton[] = {
    {
        .iv = 50,
        .lvl = 49,
        .species = SPECIES_DODRIO,
        .moves = {MOVE_TRI_ATTACK, MOVE_DRILL_PECK, MOVE_LOW_KICK, MOVE_PURSUIT},
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_QUICK_ATTACK, MOVE_ICE_PUNCH, MOVE_FAINT_ATTACK, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_SLASH, MOVE_METAL_CLAW, MOVE_NIGHT_SLASH, MOVE_SHADOW_PUNCH},
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_FAINT_ATTACK, MOVE_CURSE, MOVE_BRICK_BREAK},
    },
    {
        .iv = 50,
        .lvl = 51,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_ROAR},
    },
};
