package sorting;

import java.util.Arrays;

public class CountingSort implements Sorter {

    @Override
    public int[] sort(int[] arr) {
        return countingSort(arr);
    }

    private int[] countingSort(int[] arr) {
        int minVal = Arrays.stream(arr).min().orElse(0);
        int maxVal = Arrays.stream(arr).max().orElse(0);

        int size = maxVal - minVal + 1;
        int[] counts = new int[size];

        for (int num : arr) {
            counts[num - minVal]++;
        }

        for (int i = 0, k = 0; i < size; ++i) {
            while (counts[i]-- > 0) {
                arr[k++] = i + minVal;
            }
        }

        return arr;
    }

}
