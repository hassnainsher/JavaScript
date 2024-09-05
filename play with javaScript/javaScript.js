  // Drag and drop cursor logic
  const cursorimg = document.getElementById('cursorimg');
  let isDragging = true;
  let offsetX = 1;
  let offsetY = 1;

  cursorimg.addEventListener('mousedown', (e) => {
      isDragging = true;
      offsetX = e.clientX - cursorimg.getBoundingClientRect().left;
      offsetY = e.clientY - cursorimg.getBoundingClientRect().top;
      cursorimg.style.cursor = 'auto'; //grabbing
  });

  document.addEventListener('mousemove', (e) => {
      if (isDragging) {
          const mouseX = e.clientX - offsetX;
          const mouseY = e.clientY - offsetY;
          cursorimg.style.left = `${mouseX}px`;
          cursorimg.style.top = `${mouseY}px`;
      }
  });

  document.addEventListener('mouseup', () => {
      cursorimg.style.cursor = 'auto';
  });

  // Search function
  function search(event) {
      event.preventDefault(); // Prevent form submission

      const input = document.getElementById('searchInput').value.toLowerCase();
      const content = document.querySelectorAll('.content p');
      let resultFound = false;

      content.forEach((paragraph) => {
          // Reset previous highlights
          const originalText = paragraph.textContent;
          paragraph.innerHTML = originalText;

          if (input && originalText.toLowerCase().includes(input)) {
              const regex = new RegExp(`(${input})`, 'gi');
              const highlightedText = originalText.replace(regex, `<span class="highlight">$1</span>`);
              paragraph.innerHTML = highlightedText;
              resultFound = true;
          }
      });

      const searchResults = document.getElementById('searchResults');
      if (input && resultFound) {
          searchResults.textContent = 'Results found!';
      } else if (input && !resultFound) {
          searchResults.textContent = 'No results found.';
      } else {
          searchResults.textContent = '';
      }
  }