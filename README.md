# oop-spring2019-public

## js - npm/mocha

On windows, we installed WSL 16.04, available on the play store.  This should be simliar to Ubunntu 16.04 server if you use VirtualBox or VMWare.

On campus, the WSL files are saved under

```
C:\Users\username\Documents\WSL
```

to map in linux <-> windows

```
/mnt/c/Users/wmacevoy  ⟷ C:\Users\wmacevoy
```

Escape out spaces by quoting or a backslash

```
"Warren MacEvoy" 'warren macevoy'  warren\ macevoy
```

You can "snapshot" this by backing it up in a step (exit WSL first)

Then to install npm/mocha:

```bash
sudo apt update
sudo apt upgrade
sudo apt install nodejs-legacy npm

sudo npm install -g mocha

mkdir /place/for/node/project
npm init . # say "mocha" for test env
```

If you missed this, you can edit in mocha by adding

```js
"scripts": {
    "test": "mocha"
  },
```

in the `package.json` file npm init created for you.

Tutorial example:

https://codeburst.io/how-to-test-javascript-with-mocha-the-basics-80132324752e

## Splitting tests:

Change the `package.json` so it reads

```js
"scripts": {
    "test": "mocha --recursive"
  },
```