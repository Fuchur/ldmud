void reset(int started)
{
    if (!started)
	set_light(1);
}

void init()
{
    add_action("north", "north");
    add_action("east", "east");
}

string short()
{
    return "A dimly lit forest";
}

void long()
{
    write("You are in part of a dimly lit forest.\n" +
	  "Trails lead north and east\n");
}

int north()
{
    this_player()->move_player("north#room/south/sforst37");
    return 1;
}

int east()
{
    this_player()->move_player("east#room/south/sforst44");
    return 1;
}
