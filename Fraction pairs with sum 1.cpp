 while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int countFractions(int N, int numerator[], int denominator[]) {
    map<pair<int,int>,int> frac;
    
    int count = 0;
    
    for (int i = 0; i < N; ++i) {
        int num = numerator[i];
        int den = denominator[i];
        int g = gcd(num, den);
        num = num/g, den = den/g;
        pair<int,int> p = make_pair(den-num, den);
        
        if(frac[p]!=0) count+=frac[p];
        frac[{num, den}]++;
}
return count; }
