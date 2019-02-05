# oop-spring2019-public

## js - npm/mocha

On windows, we installed WSL 16.04, available on the play store.  This should be simliar to Ubunntu 16.04 server if you use VirtualBox or VMWare.

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

