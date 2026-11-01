# JUTSU Security Policy

## Overview and Scope

JUTSU is an anime-inspired distributed version control system built upon the foundation of Git.
This security policy covers JUTSU-specific code, including:

- The JUTSU command translation and dispatch layer.
- Anime-themed command implementations, aliases, and shims (e.g., `domain-expansion`, `byakugan`, `chibaku-tensei`).
- Custom terminal presentation, formatting, and UI enhancements.
- JUTSU-specific shell completion, configuration scripts, and documentation.

Vulnerabilities originating within the underlying Git engine are governed by upstream Git's security process (see [Upstream Git Vulnerabilities](#upstream-git-vulnerabilities)).

---

## Distinguishing JUTSU vs. Upstream Vulnerabilities

Because JUTSU is built directly on the Git engine, reporters should determine whether an issue belongs to JUTSU or upstream Git:

1. **JUTSU-Specific Vulnerabilities**:
   - The issue occurs only when invoking JUTSU commands, command translation shims, or custom CLI features.
   - The issue relates to theme mechanics, argument transformation, or JUTSU presentation layers.
   - *Action*: Report privately to JUTSU using the reporting instructions below.

2. **Upstream Git Vulnerabilities**:
   - The issue reproduces in standard Git (`git <command>`) without JUTSU-specific components.
   - The issue lies in core Git engine subsystems (object store, commit-graph, packfile negotiation, transport protocols, diff/merge algorithms, `fsck`, or standard Git subcommands).
   - *Action*: Report directly to upstream Git (see [Upstream Git Vulnerabilities](#upstream-git-vulnerabilities)). Do not disclose upstream issues publicly or through JUTSU channels.

> **Guidance on Uncertainty**: If you are unsure whether a suspected vulnerability originates in JUTSU or upstream Git, report it privately through JUTSU's **GitHub Private Vulnerability Reporting** channel with your observations and an isolated reproduction case. Do **not** attempt to test or verify potentially exploitable behaviour on production systems or shared environments. JUTSU maintainers will assist in triaging the report and coordinating with upstream Git security if appropriate.

---

## Reporting a JUTSU Vulnerability

Vulnerability reports for JUTSU should be submitted confidentially using **GitHub Private Vulnerability Reporting (PVR)**:

1. Navigate to the JUTSU repository on GitHub.
2. Select the **Security** tab.
3. Under **Reporting**, click on **Advisories**.
4. Click **Report a vulnerability** to open the private advisory form.

### Report Details

Please include as much detail as possible to assist with triage:

- A clear description of the vulnerability and its potential security impact.
- Step-by-step reproduction instructions or a minimal proof-of-concept demonstration executed in an isolated local test environment.
- The affected operating system, shell, and environment details.
- Any relevant configuration settings or repository states required to trigger the issue.
- The name or handle of any researchers to credit upon disclosure.

### Response Timelines and Policies

- **Reporting Channel**: GitHub Private Vulnerability Reporting is the designated channel for all JUTSU security disclosures. No separate fallback security email address is currently established.
- **Response Guarantees**: JUTSU is an open-source project in early development. No guaranteed response SLA, triage turnaround time, or fixed disclosure embargo period has been established. Maintainers will review reports as time and resources permit.

---

## Upstream Git Vulnerabilities

Security issues originating in the core Git engine should be reported directly to the upstream Git security team:

- **Upstream Contact**: Send a detailed, confidential report to `git-security@googlegroups.com`.
- **Confidentiality**: Upstream Git expects vulnerabilities to be discussed *only* on that list and kept confidential until the coordinated announcement on the Git mailing list on the upstream release date.
- **Attribution**: Upstream Git security practices and contact details are maintained by the Git project community (<https://git-scm.com>).

---

## Supported Versions

JUTSU is currently in **pre-release development** (Phase 1: Foundation & Specification).

- **Current Status**: There are no stable release versions or Long Term Support (LTS) tracks.
- **Maintenance**: JUTSU is currently in active pre-release development on the `master` branch, focusing on initial specifications and foundation design. As JUTSU-specific implementations are introduced, security fixes will be committed directly to the `master` branch.
- **Future Support**: A formal release versioning and security support lifecycle will be defined once JUTSU reaches its initial public release.
