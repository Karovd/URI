 #include <cstdio>

 inline void scan(int &n) {
    n = 0;
    int ch = getchar_unlocked();
    int sign = 1;

    while (ch < '0' || ch > '9') {
        if (ch == '-') sign = -1;
        ch = getchar_unlocked();
    }

    while (ch >= '0' && ch <= '9')
        n = (n<<3) + (n<<1) + ch - '0', ch = getchar_unlocked();
    n *= sign;
}

 int main() {
     int A, B, X;
     
     scan(A);
     scan(B);
     X = A+B;
     printf("X = %d",X);
 }