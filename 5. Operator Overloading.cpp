class Matrix {
    public:
        vector<vector<int> > a;
        Matrix operator + (const Matrix&);
};

Matrix Matrix::operator+ (const Matrix& param) {
    Matrix temp;
    int n = a.size(),i,j;
    int m = a[0].size();
    for(i=0;i<n;i++) {
        vector<int> b;
        for(j=0;j<m;j++) {
            b.push_back(param.a[i][j]+a[i][j]);
        }
        temp.a.push_back(b);
    }
    return temp;
}
