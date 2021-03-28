class Board{
  public:
    int* a;
    int* b;
    const char rub='!';
    Board();
    Board(Board &b);
    Board(int* a,int* b);
    ~Board();
    
};
struct Point{
    double x,y;
    void draw_char(int p,char ch);
    void draw_up_line(int p,char ch);
    void draw_line(int p1,int p2,char ch);
    void display(Board b,int p1,int p2,char ch);
};