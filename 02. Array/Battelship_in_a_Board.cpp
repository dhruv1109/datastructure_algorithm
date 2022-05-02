 //https://leetcode.com/problems/battleships-in-a-board/
 
 int countBattleships(vector<vector<char>>& A)
 { 
    int n = A.size(),m = A[0].size(),count=0;
    for( int i=0; i<n; i++ )
    {
        for( int j=0; j<m; j++ )
        {
            
            if( A[i][j]=='X' )
            {
                if( i==0 && j==0 ) 
                    count++; 
                else if( i==0 ) 
                {          
                    if( A[i][j-1]!='X' )
                        count++;
                }
                    
                else if( j==0 )
                {            
                    if( A[i-1][j]!='X' )
                        count++;
                }
                else if( A[i-1][j]=='.' && A[i][j-1]=='.') 
                    count++;
            }
        }
    }
    return count;
}