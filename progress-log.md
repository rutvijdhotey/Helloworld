# Progress Log

## 2026-10-16: Insert latency discussion (SQL vs NoSQL, key types)
- Topic: write/insert latency for Spanner/Postgres vs NoSQL; effect of UUID/string/int IDs.
- Status: discussion only, no code yet.
- Conclusions so far (from general knowledge, NOT yet verified against sources):
  - Commit latency is dominated by durability and replication (WAL fsync, consensus), not the in-memory write.
  - Key type matters mostly for index size, locality and hotspotting, not per-insert CPU.
  - Spanner: avoid monotonically increasing keys (hotspotting). Postgres: random UUIDv4 hurts B-tree locality; time-ordered IDs (UUIDv7) help.
- Open questions sent to user: meaning of "wrt memory", target systems/configs, row-level vs batch, durability needs, theory vs benchmark, citation formality.
- Next: wait for answers; optionally search official docs for citable numbers and/or write a benchmark.
