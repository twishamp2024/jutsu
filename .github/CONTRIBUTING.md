# Contributing to JUTSU

Thank you for your interest in contributing to **JUTSU**!

JUTSU is an anime-inspired distributed version control system built upon the battle-tested foundation of Git. We welcome contributions that help bring thematic creativity, tactical developer workflows, and solid engineering to the project.

---

## How to Contribute

Unlike upstream Git, which primarily uses an email mailing list (`git@vger.kernel.org`), JUTSU development and collaboration take place on GitHub:

- **GitHub Issues**: Use issues to report bugs, request features, or propose improvements. Before opening a new issue, please check existing issues to avoid duplicates.
- **GitHub Pull Requests**: Submit pull requests for proposed code, documentation, or design changes.

> **Note on Upstream Git vs. JUTSU Contributions**:
> JUTSU builds on the core Git engine.
> - **JUTSU-specific contributions**: Anime-themed commands, CLI translation/dispatch layers, custom terminal presentation, JUTSU documentation, and theme-specific workflows should be proposed here via Pull Requests.
> - **Upstream Git changes**: General Git bugfixes, core object engine improvements, protocol enhancements, or platform compatibility patches intended for Git itself should be submitted upstream to the Git community via the [Git mailing list](https://git-scm.com/docs/SubmittingPatches).

---

## Contribution Areas

We welcome contributions across several areas:

1. **Anime-Inspired CLI Commands**: Designing, implementing, and refining themed command aliases and specialized workflow mechanics (e.g., `domain-expansion`, `byakugan`, `chibaku-tensei`).
2. **Core Integration**: Integrating the JUTSU invocation and translation layer cleanly into the underlying C codebase and command-dispatch mechanism.
3. **Testing**: Writing unit, integration, and regression tests to verify that JUTSU commands work reliably and do not break core version control operations.
4. **Documentation**: Clarifying command specifications, writing guides, improving manuals, and expanding developer onboarding materials.
5. **Usability & UX**: Polishing terminal output formatting, error messaging, developer ergonomics, and shell completion scripts.

---

## Guidelines for Pull Requests

To help maintainers understand and review your changes efficiently:

- **Explain Purpose and Behaviour**: Clearly explain the motivation for the change and describe how the proposed behaviour works. Include examples or terminal output where relevant.
- **Scope Your Changes**: Keep pull requests focused on a single topic or feature to streamline review.
- **Adhere to C Coding Standards**: For any changes in C, follow the inherited conventions documented in [`Documentation/CodingGuidelines`](../Documentation/CodingGuidelines).
- **Testing Expectations**:
  - Add or update tests covering any new functionality, changed behaviour, or fixed bugs.
  - Run the test suite before submitting to ensure no regressions are introduced.
- **Licensing and Compatibility**: Ensure all contributions comply with the project's [GNU General Public License version 2 (GPLv2)](../COPYING). Do not introduce code incompatible with the existing licensing.

Please note that submitting an issue or pull request does not guarantee that it will be accepted or merged into JUTSU. All proposals are subject to code review, design discussion, and maintainer evaluation.
