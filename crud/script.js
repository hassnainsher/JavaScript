


document.getElementById('myForm').addEventListener('submit', function (event) {
    event.preventDefault();

    const name = document.getElementById('name').value;
    const dob = document.getElementById('dob').value;
    const address = document.getElementById('address').value;
    const phone = document.getElementById('phone').value;
    const rowId = document.getElementById('myForm').dataset.rowId;

    const tableBody = document.getElementById('dataTable').getElementsByTagName('tbody')[0];

    if (rowId) {
        const row = tableBody.rows[rowId];
        row.cells[0].textContent = name;
        row.cells[1].textContent = dob;
        row.cells[2].textContent = address;
        row.cells[3].textContent = phone;

        delete document.getElementById('myForm').dataset.rowId;

        document.getElementById('myForm').reset();
        document.getElementById('updateBtn').style.display = 'none';
    } 
    else {
        const newRow = tableBody.insertRow();
        newRow.insertCell().textContent = name;
        newRow.insertCell().textContent = dob;
        newRow.insertCell().textContent = address;
        newRow.insertCell().textContent = phone;

        const actionsCell = newRow.insertCell();
        const deleteBtn = document.createElement('button');
        deleteBtn.textContent = 'Delete';
        deleteBtn.addEventListener('click', function () {
            tableBody.deleteRow(newRow.rowIndex - 1);
        });
        actionsCell.appendChild(deleteBtn);

        const updateBtn = document.createElement('button');
        updateBtn.textContent = 'Update';
        updateBtn.addEventListener('click', function () {
            document.getElementById('name').value = name;
            document.getElementById('dob').value = dob;
            document.getElementById('address').value = address;
            document.getElementById('phone').value = phone;

            document.getElementById('myForm').dataset.rowId = newRow.rowIndex - 1;
            document.getElementById('updateBtn').style.display = 'inline';
        });
        actionsCell.appendChild(updateBtn);

        document.getElementById('myForm').reset();
    }
});

document.getElementById('updateBtn').style.display = 'none';
