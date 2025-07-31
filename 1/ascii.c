#include <stdio.h>

int main() {
    printf("ASCII Table (0 to 127)\n");
    printf("----------------------\n");
    printf("Char\tASCII\n");

    for(int i = 0; i <= 127; i++) {
        // For non-printable characters, print a placeholder
        if(i < 32 || i == 127)
            printf("N/A\t%d\n", i);
        else
            printf("%c\t%d\n", i, i);
    }

    return 0;
}

/* Output :-

ASCII Table (0 to 127)
----------------------
Char    ASCII
N/A     0
N/A     1
N/A     2
N/A     3
N/A     4
N/A     5
N/A     6
N/A     7
N/A     8
N/A     9
N/A     10
N/A     11
N/A     12
N/A     13
N/A     14
N/A     15
N/A     16
N/A     17
N/A     18
N/A     19
N/A     20
N/A     21
N/A     22
N/A     23
N/A     24
N/A     25
N/A     26
N/A     27
N/A     28
N/A     29
N/A     30
N/A     31
        32
!       33
"       34
#       35
$       36
%       37
&       38
'       39
(       40
)       41
*       42
+       43
,       44
-       45
.       46
/       47
0       48
1       49
2       50
3       51
4       52
5       53
6       54
7       55
8       56
9       57
:       58
;       59
<       60
=       61
>       62
?       63
@       64
A       65
B       66
C       67
D       68
E       69
F       70
G       71
H       72
I       73
J       74
K       75
L       76
M       77
N       78
O       79
P       80
Q       81
R       82
S       83
T       84
U       85
V       86
W       87
X       88
Y       89
Z       90
[       91
\       92
]       93
^       94
_       95
`       96
a       97
b       98
c       99
d       100
e       101
f       102
g       103
h       104
i       105
j       106
k       107
l       108
m       109
n       110
o       111
p       112
q       113
r       114
s       115
t       116
u       117
v       118
w       119
x       120
y       121
z       122
{       123
|       124
}       125
~       126
N/A     127
*/