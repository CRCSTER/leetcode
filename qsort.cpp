void qsort(vector<int> &arr, int l, int r){
    if(l < r){
	int i = l, j = r;
	int x = arr[l];//选择基准数据，可以改进，也是提高性能的关键
	while(i < j){
	    while(i < j && arr[j] >= x)
		j--;
	    if(i < j)
		s[i++] = s[j];
	    while(i < j && arr[i] <= x)
		i++;
	    if(i < j)
		s[j--] = s[i];
	}
	s[i] = x;
	qsort(arr, l, i - 1);
	qsort(arr, i + 1, r);
    }	
)
