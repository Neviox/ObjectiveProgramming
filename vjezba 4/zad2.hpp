struct Point{
  public:
    double x,y;
    Point(double x,double y);
    ~Point();
};
class Board{
  public:
    int a,b;
    const char rub='!';
    int** matrix;
    int xb,yb;
    char znak;
    double* vrijednosti;
    void draw_char(Point& p,char ch);
    void draw_up_line(Point& p,char ch);
    void draw_line(Point& p,Point& p1,char ch);
    void display(Point& p);
    Board();
    Board(Board &b);
    Board(int a,int b);
    ~Board();
};    


