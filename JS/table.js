function addROW() {
    var table = document.getElementById("table");
    var length = table.rows.length;
    var new_row = table.insertRow(length);
    console.log(new_row);
    
    var nameCOl = new_row.insertCell(0);
    var phonenumberCol = new_row.insertCell(1);
    var actionCol = new_row.insertCell(2);

    nameCOl.innerHTML = "name" ;
    phonenumberCol.innerHTML = "phonenumber";
    actionCol.innerHTML = "<button onclick='deleteRow(this)'>删除</button><button onclick='changeRow(this)'>修改</button>";
}

function deleteRow(button) {
    var table = document.getElementById("table");
    var row = button.parentNode.parentNode;
    row.parentNode.removeChild(row);
}

function changeRow(button) {
    var row = button.parentNode.parentNode;
    var name = row.cells[0];
    var phonenumber = row.cells[1];

    var inputName = prompt("name:");
    var inputPhoneNumber = prompt("Phone number:");

    name.innerHTML = inputName;
    phonenumber.innerHTML = inputPhoneNumber;

    // row.cells[0].innerHTML = "dadwad";
    // row.cells[1].innerHTML = "1weqr3";
}