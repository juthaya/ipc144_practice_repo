# Creating and Working with Your Assignment Repository Using GitHub CLI

This guide explains how to create your own repository from a course template using GitHub CLI (`gh`), and then clone it to your local computer for development.

# Essential Workflow
** This first part has to be done only once **
```bash
gh auth logout   # this just resets your current session
gh auth status   # this should say "not logged in"
gh auth login    # this starts the authetication process
gh auth status   # this should not show you "logged in" with your EMU
```

** This second part is done each time to start any lab, assignment, exam, etcetera **
```bash
gh repo create   # see below for complete expression to create your repo
gh repo clone    # see below for compelte expression to clone your repo to your local machine
```

** The third part is done throughout your daily workflow **
```bash
git add .
git commit -m "Write a meaninful memo"
git push
```


## Naming Convention

>Student repositories use the following format:
>
>```text
>f26-ops102-lab00-luciusAnnaeus_seneca
>```
>
>Where:
>
>- `f26` = semester (Fall 2026)
>- `ops102` = course code
>- `lab00` = assessment name
>- `luciusAnnaeus_seneca` = your EMU / Seneca UserID with _seneca suffix
>
>Example:
>
>```text
>f26-ops102-lab00-luciusAnnaeus_seneca
>```
>
---

## Prerequisites

Install and authenticate GitHub CLI on the remote UN*X node (only done once):

```bash
gh auth logout 
gh auth login
```

Accept the defaults, similar to:
> ? Where do you use GitHub? GitHub.com
> ? What is your preferred protocol for Git operations on this host? HTTPS
> ? How would you like to authenticate GitHub CLI? Login with a web browser
> 
> ! First copy your one-time code: F2D8-393C
> Press Enter to open https://github.com/login/device in your browser...

* At this point, copy the code.
* On your local node, ensure you have logged into the 
* GHEC (https://github.com/Seneca-Polytechnic) first using SSO.  
* Open the URL on your local machine (https://github.com/login/device)
* continue using your EMU account, paste the code when prompted, then authorize

When returning to the remot UN*X node, hit [ENTER] if necessary to complete 
the process.  Expect to see the following carp:
> /usr/bin/xdg-open: line 881: www-browser: command not found
> /usr/bin/xdg-open: line 881: links2: command not found
> /usr/bin/xdg-open: line 881: elinks: command not found
> /usr/bin/xdg-open: line 881: links: command not found
> /usr/bin/xdg-open: line 881: lynx: command not found
> /usr/bin/xdg-open: line 881: w3m: command not found
> xdg-open: no method available for opening 'https://github.com/login/device'
> ! Failed opening a web browser at https://github.com/login/device
>   exit status 3
>   Please try entering the URL in your browser manually

You should now be authenticated

Verify access:

```bash
gh auth status
```

If the output indicates you are logged in with your EMU, you are ready to proceed.

---

#### _Everything You Do Now You Will Repeat For Every Graded Instrument_

## Create Your Repository from the Template

The courses professor will provide the template repository name.

Example template:

```text
Seneca-Acad-OPS102/ops102-lab00-template
```

** Create your repository: **

n.b. general syntax:  gh repo create NEW_REPO --template TEMPLATE_REPO --private

```bash
ORG="Seneca-Acad-OPS102"
EMU="luciusAnnaeus_seneca"  # put your actual EMU here
gh repo create $ORG/f26-ops102-lab00-$EMU --template $ORG/ops102-lab00-template --private
```

When prompted, choose NO:

```text
Clone the repository locally? No
```

---

## Clone the Repository

Clone the repository to your computer:

```bash
gh repo clone $ORG/f26-ops102-lab00-$EMU
```

Enter the project directory:

```bash
cd f26-ops102-lab00-luciusAnnaeus_seneca
```

---

## Verify Git Remote

Check that your repository is connected correctly to the GHEC:

```bash
git remote -v
```

Expected output would be similar to:

```text
origin  https://github.com/Seneca-Acad-OPS102/f26-ops102-lab00-luciusAnnaeus_seneca.git
```

---

## Daily Workflow Now That Your Repo Is Cloned Locally

cd() into the local repo directory; this is typically:
```bash
cd ~/sandbox/repo/REPO_DIR  # replace REPO_DIR with the actual name
```

Get any updates:

```bash
git pull
```

Check status:

```bash
git status
```
** Work on the repo; at each significant change, record it **

Stage (collect) changes:

```bash
git add .
```

Commit changes:

```bash
git commit -m "Complete Part 1"
```

Push changes:

```bash
git push
```

For more informtion, see the documentation at:
- [Commit and Push Often](docs/WHY_COMMIT_AND_PUSH_OFTEN.md)

---

## View Repository in Browser

Open the repository page:

```bash
gh repo view --web
```

---

## Complete Example

```bash
# Create repository from template
ORG="Seneca-Acad-OPS102"
EMU="luciousAnnaeus_seneca"
gh repo create $ORG/f26-ops102-lab00-$EMU  --template $ORG/ops102-lab00-template  --private

# Clone repository
gh repo clone $ORG/f26-ops102-lab00-$EMU

# Enter directory
cd ./f26-ops102-lab00-$EMU

# Work normally
git add .
git commit -m "init push"
git push
```
