   vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
         for(int i=0; i<numRows; i++){
            r[i].resize(i+1);       // make size 1 larger than last
            r[i][0] = r[i][i] = 1; //start and end as 1            
            
            for(int j=1; j<i; j++)
                r[i][j] = r[i-1][j-1] + r[i-1][j];
        }
        return r; 
      //return r[n-1];// to return last row, just make it
    }
