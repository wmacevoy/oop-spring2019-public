FROM node:10.9-slim

RUN apt-get -y update \
    && apt-get install -y git

RUN yarn global add @vue/cli -g

RUN apt-get autoremove -y \
    && apt-get autoclean -y \
    && apt-get clean -y \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /usr/src/app

# Or just use EXPORT 8080
EXPOSE 8080
EXPOSE 8000

# If yout want use vue-cli UI you need to also EXPORT 8000 

USER node

# switch to npm if you chose it as package manager
CMD ["yarn", "serve"]
