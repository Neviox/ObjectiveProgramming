class Vector {
 public:                    
    Vector();
    Vector(int n,double k);
    Vector(Vector &v);
    ~Vector();
    void vector_new();
    void vector_delete();
    void vector_push_back(int x);
    void vector_pop_back();
    int vector_front();
    int vector_back();
    int vector_size();
    void vector_print();
 private:
    double* element;
    int logicka;
    int fizicka;
};