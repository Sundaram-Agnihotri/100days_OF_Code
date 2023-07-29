class Solution {
public:
    static double soups(int a,int b,vector<vector<double>>& soup)
    {   
        if(a<=0 && b<=0)
            return 0.5;
        if(a<=0)
            return 1.0;
        if(b<=0)
            return 0.0;
        if(soup[a][b]!=NULL)return soup[a][b];
        int soupa[4]={100,75,50,25};
        int soupb[4]={0,25,50,75};
        soup[a][b]=0.0;
        for(int i=0;i<4;i++)
            soup[a][b]+=soups(a-soupa[i],b-soupb[i],soup);
        return soup[a][b]*=0.25;
    }
    double soupServings(int N) {
        if(N>5000) return 1.0;
        vector<vector<double>> soup(N+1,vector<double>(N+1,NULL));
        return soups(N,N,soup);
    }
};
