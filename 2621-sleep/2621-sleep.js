/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    return new Promise((resolve)=>{
        setTimeout(()=>{
            resolve(`This will get executed after ${millis} milliseconds`)
        },millis)
    })
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */