
                                                                                   //Operators in C :-

/*

(a)Unary operator (needs one operand)
(b)Binary operators (needs two operands)
(c) Ternary operators (needs three operands)

*/
/*

1.	Unary operators.[+, -, ++, --, sizeof()]
int x=5;
printf(“%d”,x);
output : 5

x++; post increment.
printf(“%d",x)
output:6

++x; pre increment.
printf(“%d",x)
output: 7

post increment after pre solve krna hota hai. Even sbse last me post solvle krna hota hai agar bhot saare operators lge ho to.

Q. 
main()
{
    int x=5,y;
    y=x++;
    printf("%d%d",x,y);  output 6,5
}

2.	Arithmetic operators  [+, -, *, /, %]

       priortity order 

       1.*, /, % (check left to right associativity)
       2. +, -
       eg.
       3+4=7
       3-4=-1
       3*4=12
       3/4=0
       3.0/4=.75
       3/4.0=.75
       3.0/4.0=.75
       35%6=5
       2.5 % 3= error(in c we can't appy mod on real number)
       2/5=2
3.Bitwise operators[&,|,^,~,>>,<<]

0&0=0 | 0^0=0           
0&1=0 | 0^1=1         
1&0=0 | 1^0=1
1&1=1 | 1^1=0

0|0 =0 |  
0|1 =1 | ~0=1
1|0 =1 | ~1=0
1|1 =1 | 

       x=106>>2;       
 phle 106 ka binary kro 
00000000_00000000_00000000_01101010(106 im 32 bits)
now we have to shift 2
add two new 0 from left and remove two bits from last
00000000_00000000_00000000_00011010

3. Relational operaot[<,>,<=,>=,!=,==]
true=1
false=0
3<4 true
4<3 false
2==3 false
5>4>3 0 ayega kuki phel 5>4 solve hoga phir 1>3 to 0 ayega.

4. Logical operaotr[!, &&, ||]
!T=F
!F=T
x=5>4. 1
x=!(5>4). 0 

5. Assignment operators[+=,-=,*=,/=,%=]

x=4;
4=x;galat hai error
int x=5;
x+=2; 7
x*=3 21
x%=4 1
*/
