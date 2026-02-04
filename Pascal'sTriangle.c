int** generate(int numRows, int* returnSize, int** returnColumnSizes) 
{
    int i,j;
    *returnColumnSizes=(int*)malloc(numRows * sizeof(int));  
    int **result=(int**)malloc(numRows*sizeof(int *));
    for(i=0;i<numRows;i++)
    {
        (*returnColumnSizes)[i] = i + 1;
        result[i] = (int*)malloc((i+1)*sizeof(int));
        result[i][0]=1;
        result[i][i]=1;
        if(i>1)
        {
           for(j=1;j<i;j++)
           {
               result[i][j]=result[i-1][j-1]+result[i-1][j];
           }
        }
    }
    *returnSize = numRows;
    return result;
}
