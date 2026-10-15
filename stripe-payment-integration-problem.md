# Saved Problem: Stripe Payment Integration

**Source:** https://prachub.com/interview-questions/stripe-payment-integration-error-handling-idempotent-retries-and-payment-storage

**Status:** Saved, not started.
**Revisit:** Friday 2026-10-16, 9:00am Pacific (reminder via app notification)

## Problem

Your backend service needs to start charging customers through Stripe, a third-party payments API. The interviewer asks you to add a Stripe integration, then probes how you would make it robust. Assume each charge pays for one order that already exists in your system, for a known amount and currency.

### Clarifying Questions (guidance)
- Is the payment completed while the user waits on the checkout page, or can it finish asynchronously?
- Do card details ever reach your servers, or does the provider's client-side form collect them?
- Are refunds and recurring payments in scope, or only one-time charges?
- What should the user see while the outcome of a payment is still unknown?

### Part 1 — Error handling
Walk through what can go wrong when your service calls Stripe to charge a customer, and how your code handles each case, so that a customer is never charged twice and a successful payment is never lost.

Should cover:
- Which failures are safe to retry and which are not
- How retries are made safe when the outcome of a request is unknown
- The retry policy, and what happens when retries are exhausted
- How outcomes that arrive later, or out of order, are applied

### Part 2 — What to store, and in which database
What payment data must your service persist, and which database would you choose for it? Justify the choice in terms of ACID transactions and availability.

## Progress Log

- 2026-10-15: Saved link. Reminder requested for Friday morning.
- 2026-10-15: Added full problem text. Reminder set for Fri 2026-10-16 9:00am PT (16:00 UTC).
