//C program to print all natural numbers from 1 to n

//Input

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d : \n", n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}


//Output

/*Enter any number: 50
Natural numbers from 1 to 50 : 
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
*/
