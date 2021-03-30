struct Point{
  public:
    double x,y;
    const char ch='x';
    Point(double x,double y);
    void draw_up_line(Point p,Point p1);
    void draw_line(Point p,Point p1);
    void display();
    ~Point();
};
class Board{
  public:
    int a;
    int b;
    const char rub='!';
    char** matrix;
    void draw_char(Point p,char ch);
    Board();
    Board(Board &b);
    Board(int a,int b);
    ~Board();
};    


