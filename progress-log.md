# Progress Log: cache code review discussion

## 2026-10-15
- Reviewed the `get_result` dict-cache snippet (long-lived, multi-threaded service).
- Problems found, grouped by area:
  - **Storage:** unbounded growth, no eviction, no TTL, large values
  - **Concurrency:** check-then-act race, cache stampede, KeyError once eviction exists
  - **Failure:** error values cached (poisoning), failures must reach all waiters, retry policy
  - **Input:** unhashable keys, `1 == True == 1.0` collisions, attacker-controlled keys, unvalidated key passed to computation
  - **Data safety:** shared mutable cached objects
  - **Observability:** hit/miss/eviction/size/in-flight/compute-latency/error metrics
  - **Scale-out:** per-process caches diverge and multiply memory
- Proposed a fix: bounded LRU + TTL + per-key single-flight + validation + stats.
- Open: waiting on answers to the clarifying questions (key cardinality, value size, TTL, failure mode, deployment topology).
- Next: LRU complexity write-up, distributed-cache failure modes, negative-caching policy.
