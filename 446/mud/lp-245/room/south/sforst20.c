reset(started)
{
    if (!started)
	set_light(1);
}

init()
{
    add_action("north", "north");
    add_action("east", "east");
    add_action("west", "west");
}

short()
{
    return "A dimly lit forest";
}

long()
{
    write("You are in part of a dimly lit forest.\n" +
	  "Trails lead north, east and west\n");
}

north()
{
    this_player()->move_player("north#room/south/sshore8");
    return 1;
}

east()
{
    this_player()->move_player("east#room/south/sforst18");
    return 1;
}

west()
{
    this_player()->move_player("west#room/south/sshore9");
    return 1;
}
