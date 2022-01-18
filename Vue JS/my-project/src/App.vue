<template>
  <div id="app">
  <h2>Hello Vue CLI</h2>
    <img alt="Vue logo" src="./assets/logo.png">
    <div class = 'row'>
      <div class = 'col'>
        <Testing name='Aung Myo Thant '></Testing>
      </div>
      <div class = 'col'>
        <HelloWorld msg="Welcome to Your Vue.js App"/>
      </div>
    </div>
    
    
  </div>
</template>

<script>
import HelloWorld from './components/HelloWorld.vue'
import Testing from './components/Testing.vue'

export default {
  name: 'App',
  components: {
    HelloWorld,
    Testing
  }
}
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
