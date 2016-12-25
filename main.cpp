#include"project.h"
int main()
{
    freopen("Sample_input.txt","r",stdin);
    freopen("Sample_output.txt","w",stdout);

    BigInteger a,b;
    cout<<"Input two number:";
    cin>>a>>b;
    cout<<"\n\nA ="<<a<<"\nB ="<<b<<"\n\n";

    cout<<"A+B ="<<a+b<<endl;
    if(a>b)
        cout<<"A-B ="<<a-b<<endl;
    else
        cout<<"B-A ="<<b-a<<endl;
    cout<<"A*B ="<<a*b<<endl;
    cout<<"A/B ="<<a/b<<endl;
    cout<<"A%B ="<<a%b<<endl;

    cout<<"\nA++ ="<<a++<<endl;
    cout<<"++B ="<<++b<<endl;
    cout<<"--A ="<<--a<<endl;
    cout<<"B-- ="<<b--<<endl;

    cout<<"\nsqrt(a)="<<a.Sqrt()<<endl;
    cout<<"\nsqrt(b)="<<b.Sqrt()<<endl;
    if(b<=100000)
        cout<<"B! (factorial) ="<<factorial(b)<<endl;
    cout<<"\ngcd(a,b) ="<<gcd(a,b)<<endl;
    cout<<"lcm(a,b) ="<<lcm(a,b)<<endl;

    if(a<=1000000 && b<=1000000)
    {
        cout<<"\nAth fibonacci :"<<fibonacci(a)<<endl;
        cout<<"Bth fibonacci :"<<fibonacci(b)<<endl;
    }

    cout<<"\nComparison between A & B :"<<endl;
    if(a<b)
        cout<<"A is less than B\n";
    else if(a>b)
        cout<<"A is greater than B\n";
    else
        cout<<"A is equal to B\n";
    cout<<"\nif A & B is prime or not:\n";
    if(isPrime(a))
        cout<<"A is Prime\n";
    else cout<<"A is not Prime\n";
    if(isPrime(b))
        cout<<"B is Prime\n";
    else cout<<"B is not Prime\n";
    return 0;
}
