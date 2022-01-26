A. Balanced Rating Changes
    int IMAGENUM = 1;   
    char c;
    while (cin >> n){
        char c;
        rep(i, 0, n)
            rep(j, 0, n){
                cin >> c;
                image[i][j]=(c - '0'); 
        }
        int res = 0;
        rep(i, 0, n)
            rep(j, 0, n)
                res += DFS(i, j);
        printf("Image number %d contains %d war eagles.\n", IMAGENUM++, res);
    }
}