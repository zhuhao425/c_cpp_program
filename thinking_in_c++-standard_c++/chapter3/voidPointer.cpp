int main()
{
    void *vp;
    char c;
    int i;
    float f;
    double d;

    vp = &c;
    vp = &i;
    vp = &f;
    vp = &d;
    return 0;
}