FROM node:11-alpine
RUN yarn global add chai mocha @vue/cli @vue/cli-service-global

WORKDIR /usr/src/app
ENV HOME /usr/src/app
VOLUME /usr/src/app

EXPOSE 8080
EXPOSE 8000

USER node

CMD ["vue", "serve"]
