#include <iostream>
class lvec{
    private:
        double x[4];
    public:
        lvec(){
            x[0] = 0;
            x[1] = 0;
            x[2] = 0;
            x[3] = 0;
        }
        
        lvec(double x0, double x1, double x2, double x3){
            x[0] = x0;
            x[1] = x1;
            x[2] = x2;
            x[3] = x3;
        }

        double mag();
        double operator[](size_t i){
            if (i > 3 || i<0){
                std::cerr<<"Out of bounds";
                return 0.0;
            }

            else{
                return x[i];
            }
        }

};