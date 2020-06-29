int main()
{
    int i = 99;
    void *vp = &i;
    *((int *)vp) = 3;
}