 #include <iostream>
 using namespace std;

 template <typename T, int N>//template <typename T=int, int N=5> class ArrayContainer { ... }
 class ArrayContainer {
    private:
        T elts[N];
    public:
        T set(const int i, const T val) { elts[i] = val; }
        T get(const int i) { return elts[i]; }
 };

 int main()
 {

 ArrayContainer <int, 5> intac;
 ArrayContainer <float, 10> floatac;
 intac.set(4, 3);//  el 4 indica en que posiccion del array vas a colocar el elemneto
 intac.set(4, 8);
 floatac.set(3, 3.5);


 cout << intac.get(4) << endl;
 cout << floatac.get(3) << endl;
 return 0;
 }
