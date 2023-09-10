// https://www.codewars.com/kata/515e188a311df01cba000003/train/c
const char *getPlanetName(int id)
{
    const char *res;
    if (id == 1) res = "Mercury";
    else if (id == 2) res = "Venus";
    else if (id == 3) res = "Earth";
    else if (id == 4) res = "Mars";
    else if (id == 5) res = "Jupiter";
    else if (id == 6) res = "Saturn";
    else if (id == 7) res = "Uranus";
    else if (id == 8) res = "Neptune";
    return res;
}
//
const char * getPlanetName(int id)
{
    const char *name;
    switch (id)
    {
    case 1: name = "Mercury";break;
    case 2: name = "Venus";break;
    case 3: name = "Earth";break;
    case 4: name = "Mars";break;
    case 5: name = "Jupiter";break;
    case 6: name = "Saturn";break;
    case 7: name = "Uranus";break;
    case 8: name = "Neptune";break;
    case 9: name = "Pluto"; break;
    }
    return name;
}
