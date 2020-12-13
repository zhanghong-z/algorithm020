int compare(const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    qsort (g, gSize, sizeof(int), compare);
    qsort (s, sSize, sizeof(int), compare);
    int i,j,count=0;
    for(i=0,j=0;i<gSize&&j<sSize;i++,j++)
    {
        if(s[j]>=g[i])
            count++;
        else
            j--;
    }
    return count;
}
