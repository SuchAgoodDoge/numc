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

        void print();
        void stream(std::ostream& os) const;

        double mag();
        double& operator[](size_t i);
        const double& operator[](size_t i) const;

        // x by a constant
        lvec operator*(double c){
            lvec new_vec;
            for (size_t i; i<4; i++){
                new_vec[i] = x[i] * c;
            }

            return new_vec;
        }

        // ideally want a few overloads of this
        // 1) takes particle -> boosts to frame of particle
        // 2) betax betay betaz
        // Do i want this as a matrix * vector operation instead??????
        void boost(double bx, double by, double bz);

};