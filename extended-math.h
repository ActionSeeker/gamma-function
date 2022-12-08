#include "iostream"
#include "random"

class ExtendedMath {
    void constructor(){}

    private:

        int double_factorial_odd(int n) {
            if(n == 1) return 1;
            else return n * double_factorial_odd(n-2);
        }

        int double_factorial_even(int n) {
            if(n == 2) return 2;
            else return n * double_factorial_even(n-2);
        }

    public:

       /// @brief Calculate double factorial of n i.e. n!!
       /// @param n number
       /// @return 
       unsigned int double_factorial(int n) {
            if(n<=0) return 0;
            // Return n * (n-2) * .. 4..2 or 3..1 depending upon if it is even or odd
            if(!(n % 2)) return this->double_factorial_even(n);
            return this->double_factorial_odd(n);
       }

       unsigned int generate_random_number(int q1, int q2) {
            std::random_device rd; // Random devicde from hardware
            std::mt19937 gen(rd()); // Seed the generator
            std::uniform_int_distribution<> distr(std::min(q1, q2), std::max(q1, q2)); // define the range
            return distr(gen);
       }
};