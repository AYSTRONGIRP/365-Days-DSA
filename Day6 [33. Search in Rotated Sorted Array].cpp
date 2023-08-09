class Solution
{
public:
    int binarySearch(vector<int> &arr, int l, int h, int k)
    {
        if (h < l)
            return -1;

        int mid = (l + h) / 2;

        if (k == arr[mid])
            return mid;

        if (k > arr[mid])
            return binarySearch(arr, mid + 1, h, k);

        return binarySearch(arr, l, mid - 1, k);
    }

    int pivotSearch(vector<int> &arr, int l, int h)
    {
        if (h < l)
            return -1;

        if (h == l)
            return l;

        int mid = l + (h - l) / 2;
        cout << mid << "mi";
        if (mid < h && arr[mid] > arr[mid + 1])
            return mid;

        if (mid > l && arr[mid] < arr[mid - 1])
            return mid - 1;

        if (arr[l] >= arr[mid])
            return pivotSearch(arr, l, mid - 1);

        return pivotSearch(arr, mid + 1, h);
    }

    int pivotBinarySearch(vector<int> &arr, int n, int k)
    {
        int pivot = pivotSearch(arr, 0, n - 1);
        cout << pivot << "pi";

        if (pivot == -1 || n == 1)
            return binarySearch(arr, 0, n - 1, k);

        if (arr[pivot] == k)
            return pivot;

        if (arr[0] <= k)
            return binarySearch(arr, 0, pivot - 1, k);

        return binarySearch(arr, pivot + 1, n - 1, k);
    }
    int search(vector<int> &nums, int target)
    {

        return pivotBinarySearch(nums, nums.size(), target);
    }
};
