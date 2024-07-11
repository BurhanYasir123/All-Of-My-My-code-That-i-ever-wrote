connected_devices = []
router = {
    ip:"10.0.1.0",
    password:"1234"
}

class ip_manager{
    constructor(){
        ip = "10.0.1.254"
    }
    new_ip(){
        return Math.floor(Math.random * (252 - 3)) + 3
    }
}

IpManager = new ip_manager()

