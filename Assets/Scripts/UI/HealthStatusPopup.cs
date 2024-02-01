using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HealthStatusPopup : MonoBehaviour
{
    public static HealthStatusPopup Create(Transform transform, string feedback, Color color)
    {
        Transform damagePopupInst = Instantiate(PrefabReference.i.pfHealthStatusPopup, new Vector3(transform.position.x, transform.position.y + 1, transform.position.z), Quaternion.identity);
        damagePopupInst.LookAt(Singleton.instance.cameraManager.transform.position, Vector3.up);
        HealthStatusPopup healthStatusPopup = damagePopupInst.GetComponent<HealthStatusPopup>();
        healthStatusPopup.Setup(feedback, color);

        return healthStatusPopup;
    }

    TextMeshPro text;
    Color textColor;
    float moveYSpeed = 6f;

    private void Awake()
    {
        text = transform.GetComponent<TextMeshPro>();
    }

    void Setup(string value, Color color)
    {
        text.SetText(value);
        textColor = color;
        text.color = textColor;
    }

    void Update()
    {
        if(moveYSpeed >= 0)
        {
            transform.position += new Vector3(0f, moveYSpeed, 0) * Time.deltaTime;
            moveYSpeed -= 15F * Time.deltaTime;
        }
        else
        {
            textColor.a -= 3F * Time.deltaTime;
            text.color = textColor;
            if(text.color.a < 0)
            {
                Destroy(gameObject);
            }
        }
    }
}
