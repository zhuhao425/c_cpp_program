class Rectangle
{
    int width, height;
public:
    Rectangle(int w = 0, int h = 0) : width(w), height(h) {}
    int getWidth() const { return width; }
    void setWidth(int w) { width = w;}
    int getHeight() const { return height; }
    void setHeight(int h) { height = h; }
};

int main()
{
    Rectangle r(10,47);

    r.setHeight(2 * r.getHeight());
    r.setWidth(2 * r.getWidth());

    return 0;
}