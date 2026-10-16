# Progress Log

## 2026-10-16: Sorting screen question
- Part 1: merge sort, derived Theta(n log n), O(n) extra space, stable.
- Part 2: bogosort (expected Theta(n * n!), unbounded worst case) and deterministic permutation sort (O(n * n!)).
- Follow-ups answered briefly: comparison lower bound, counting/radix sort, hybrid library sorts.
- Open: confirmed assumptions with user (comparison sort, worst-case bounds)?
- User proposed heapsort (Part 1) and bubble sort (Part 2). Heapsort is valid (Theta(n log n), O(1) space, not stable). Bubble sort is Theta(n^2), so it does NOT satisfy "slower than O(n^2)"; use bogosort or permutation sort (n * n!).
