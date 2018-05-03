/*3. Create a class called time that has separate int member data for hours, minutes, and
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments.
A main() program should create two initialized time objects (should they be const?) and
one that isn’t initialized. Then it should add the two initialized values together, leaving the
result in the third time variable. Finally it should display the value of this third variable.
Make appropriate member functions const.*/
#include <iostream>

using namespace std;

class time {
    private :
        int hour , minute , second ;
    public :
        time () : hour (0) , minute (0) , second (0)
        {}
        void fixed_initialize (int h , int m , int s)
        {
            hour = h ;
            minute = m ;
            second = s ;
        }
        void display ()
        {
            cout << hour << ":" << minute << ":" << second ;
        }
        void  add (int h1 , int h2 , int m1 , int m2 , int s1 , int s2)
        {
            hour = h1 + h2 ;
            minute = m1 + m2 ;
            second = s1 + s2 ;
            if (second >= 60 ){
                second -= 60 ;
                minute ++ ;
            }
            if (minute >= 60){
                minute -=60 ;
                hour ++ ;
            }

            if (hour>12){
                hour -= 12;
            }
        }
        void display_sum ()
        {
            cout << hour << ":" << minute << ":" << second ;
        }

};




int main()
{
    time t1 ;
    time t2 ;
    time t3 ;

        t1.fixed_initialize (12,11,10) ;
        t2.fixed_initialize (9,8,7) ;
        t3.add(12,9,11,8,10,7) ;
        cout << "The time is :" ;  t3.display_sum ();
    return 0;
}
