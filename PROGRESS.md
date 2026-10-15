# Progress Log: Currency Exchange Rate (chained conversions)

## Problem
`exchange_rate(rates, source, target) -> float`. Undirected weighted graph, edge A-B with rate r (A->B = r, B->A = 1/r). The table is consistent, so any path gives the same answer. Return 1.0 if source == target, and -1.0 if no path exists.

## Status
- [x] Problem statement received (pasted by user; the URL was unreachable from the sandbox)
- [x] Approach agreed in discussion: BFS from source, carrying the cumulative product
- [ ] Complexity and edge cases confirmed with user
- [ ] Follow-up (many queries) discussed
- [ ] Code (only if requested; the round is "no code")

## Approach
1. Build adjacency list: A -> (B, r), B -> (A, 1/r). O(E).
2. If source == target, return 1.0 (checked before looking at the graph).
3. If source or target is not in the graph, return -1.0.
4. BFS from source, `rate[source] = 1.0`; for each edge, `rate[nbr] = rate[cur] * w`.
5. Return `rate[target]` when reached, else -1.0.

## Complexity
- Time O(V + E), space O(V + E), with V <= 2E <= 20000.
- Many queries: label each component once from a root (O(V + E)), then answer each query in O(1) as `label[target] / label[source]` when both are in the same component.
