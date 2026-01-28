class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int tg) {
        int n = matrix[0].size();
        int rt = matrix.size()*(n) -1;
        int lt  = 0 ;

        while(lt<=rt)
        {
            int mid = lt + (rt-lt)/2;
            int row_ = mid/n;
            int cl_ =mid%n;
            
            if(matrix[row_][cl_]==tg)
            {
                return true;
            }
            else if(matrix[row_][cl_]<tg)
            {
                lt = mid+1;
            }
            else
            {
                rt = mid-1;
            }

        }
        return false;
    }};