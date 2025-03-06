static int y = 1;

int up_up_and_away(void)
{
    static int x = 0;
    x += y;
    return x;
}

int main(void)
{
    up_up_and_away();
    up_up_and_away();
    up_up_and_away();
    y++;
    return up_up_and_away();
}

// returns 5